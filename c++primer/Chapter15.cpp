#include <iostream>

using namespace std;

class Base {
public:
	int x;
	
	Base(int x = 0, int y = 0, int z = 0): 
		x(x), y(y), z(z) { }

	int getPri() {return z;}

protected:
	int y;

private:
	int z;
};

/*
class PubDerive: public Base {
public:
	PubDerive(int x = 0, int y = 0, int z = 0):
		Base(x, y, z) { }

	int getPub() {return x;}

	int getPro() {return y;}

	int getPri() {return z;}

};


class ProDerive: protected Base {
public:
        ProDerive(int x = 0, int y = 0, int z = 0):
                Base(x, y, z) { }

        int getPub() {return x;}

        int getPro() {return y;}

        int getPri() {return z;}

};
*/

class PriDerive: private Base {
public:
        PriDerive(int x = 0, int y = 0, int z = 0):
                Base(x, y, z) { }

        int getPub() {return x;}

        int getPro() {return y;}

        int Base::getPri() {return z;}

};


int main() {
//	PubDerive d(1 ,2, 3);
//	ProDerive d(1 ,2, 3);
	PriDerive d(1, 2, 3);
	int ans1 = d.getPub();
	int ans2 = d.getPro();
	int ans3 = d.getPri();
	int a = d.x;
	int b = d.y;
	int c = d.z;	

	cout << "a=" << a << endl;
        cout << "b=" << b << endl;
        cout << "c=" << c << endl;
	
	return 0;
}

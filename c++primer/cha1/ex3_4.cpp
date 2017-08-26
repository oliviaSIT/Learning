#include <iostream>

using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;
    if (a != b) 
        if (a < b)
            cout << b << endl;
        else 
            cout << a << endl;
    return 0;    
}

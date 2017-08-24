#include <iostream>

using namespace std;

struct Salesdata
{
    int booknumber;
    
    int isbn() const
    {
        booknumber++;
        return booknumber; 
    }
};

int main()
{
    Salesdata s={1};
    cout << s.isbn() << endl;
    return 0;
}

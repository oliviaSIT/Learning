#include <iostream>
#include <vector>

using namespace std;

int main()
{
    string x1, x2;
    vector <string> y;
    while (cin >> x1)
        y.push_back (x1);
    
    int a=y.size();
    return a;
}

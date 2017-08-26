#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int x, y, shang = 1, sign = 0;
    vector<int> v; 
   
    cin >> x ;
    if (x < 0)
    {
        sign = 1;
        x = -1 * x;
    }

    while (shang != 0)
    {
        shang = x / 10;
        v.push_back(x % 10);
        x = x / 10;
    }
    
    
    y = v[0];
    for (int n = 1; n = v.size() - 1; n++)
    {
        y = y + v[n] * 10 * n;
    }
    if (sign = 1)
       { y = -1 * y;}
    
    cout << y << endl;
    return 0;
}

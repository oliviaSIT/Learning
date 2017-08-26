#include <iostream>
#include <vector>
#include <math.h>

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
    
    int m = v.size()-1;
    y = v[0] * pow(10, m);
    for (int n = 1; n <= m; ++n)
    {
        y = y + v[n] * pow(10 ,m - n);
    }
    if (sign == 1)
       { y = -1 * y;}
    
    cout << y << endl;
    return 0;
}

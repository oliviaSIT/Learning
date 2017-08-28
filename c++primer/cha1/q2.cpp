#include <iostream>
#include <vector>
#include <climits>

using namespace std;

class solution {
public :    
    int reverse (int x) {
        int r = 0;
        while (x != 0) {
            int val = x % 10;
            int temp = r * 10 + val;
            if (temp / 10 != r)
                return 0;
            r = temp;
            x /= 10;  
            }     
     return r;
     }
};


int main() {
    solution ans;
    
    cout << ans.reverse(100) << endl;
    cout << ans.reverse(-123) << endl;
    cout << ans.reverse(INT_MAX) << endl; 

    return 0;
}

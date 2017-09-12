#include <iostream>

using namespace std;

class solution {
public:
    bool isPalindrome(int x) {
    if (x < 0) {
        x = -1 * x;
        }
    
    int high = 1;
    while (x / high >= 10) {
        high *= 10;
        }
    while (high > 1) {
         if (x % 10 != x / high % 10) {
            return false;
            }
          high /= 100;
          x /= 10;
        }
        return true;
    }
};


int main() {
    solution ans;
    int x;
    while (cin >> x){
    cout << ans.isPalindrome(x) << endl;   
    }
    return 0;
}    


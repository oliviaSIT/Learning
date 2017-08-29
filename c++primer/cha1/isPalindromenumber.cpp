#include <iosream>

using namespace std;

class solution {
public:
    bool isPalindrome(int x) {
    if (x < 0) 
        return false;
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
    
}
    
}

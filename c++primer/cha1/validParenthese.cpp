#include<iostream>
#include<string>

using namespace std;

class solution {
public:
   bool validParenthese(string x) {
      if (x.empty()) return false;

      string x1("()"), x2("[]"), x3("{}"); 
      if (x == x1 || x == x2 || x == x3) {
          return true;      
      }
      else {return false;
      }
   }
};

int main() {
    string x;
    cin >> x;
    
    solution y;
    
    if (y.validParenthese(x)) {
        cout << "correct" << endl;
    }
    else cout << "wrong" << endl;

    return 0;
}

#include<iostream>
#include<string>
#include<stack>

using namespace std;

class solution {
public:
   bool validParenthese(string x) {
      if (x.empty() || x.size() % 2 != 0) {
         return false;
      }
 
      stack<char> s;
    
      char current, p;      
      for (unsigned i = 0; i < x.size(); ++i ) {
          current = x[i];
          if (current == '(' || current == '[' || current == '{') {
               s.push(current);
          }
          else {
               if (current == ')'|| current == ']' || current == '}') {
                   if (s.empty()) {
                        return false;
                   }     
                   
                   p = s.top();
                   s.pop();
                   if (p != current + 1) {
                      return false;
                   }
               }
               else {
                   return false;
               }
          }
      }

       return s.empty();
}
};

int main() {
    string x;
    cin >> x;
    
    solution y;
    
    if (y.validParenthese(x)) {
        cout << "correct" << endl;
    }
    else {
        cout << "wrong" << endl;
    }

    return 0;
}

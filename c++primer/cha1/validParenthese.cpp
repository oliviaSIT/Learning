#include<iostream>
#include<string>
#include<stack>

using namespace std;

class solution {
public:
   bool validParenthese(string x) {
      if (x.empty() || x.size() % 2 != 0) return false;
       
      stack<char> s;
    
      char current, p;      
      for (int i = 0; i < x.size(); ++i ) {
          current = x[i];
          if ( current == '(' || current == '[' || current == '{') {
               s.push(current);
          }
          
      }



      unsigned i = 0;
      while (i < x.size() / 2) {
          switch (x[2 * i]) {
             case '(':   
                 if (x[2 * i + 1] != ')') {
                     return false;
                 }
                 else {++i;continue;}
             case '[':
                 if (x[2 * i + 1] != ']') {
                     return false;
                 }
                 else {++i;continue;}
             case '{':         
                 if (x[2 * i + 1] != '}') {
                     return false;
                 }
                 else {++i;continue;}
                 
             default: return false;
          }
     
         ++i;    
      }
      
      return true;
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

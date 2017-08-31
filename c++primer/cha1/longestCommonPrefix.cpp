#include <iostream>
#include <vector>
using namespace std;

class solution {
public :
string longestCommonPrefix(vector<string> strs) {
    string prefix = " ";
    if (strs.empty())
        return prefix;
    for (unsigned idx = 0;idx < strs[0].size();++idx) {
        for (unsigned i = 0;i < strs.size();++i) {
            if(idx >= strs[i].size() || strs[i][idx] !=strs[0][idx])
                return prefix;
        }
        prefix.push_back(strs[0][idx]);
    }    
    return prefix;
    }
};

int main() {
    solution ans;
    vector<string> strs = {"apple", "app","apply"};
    cout << ans.longestCommonPrefix(strs) << endl;

    return 0;
}

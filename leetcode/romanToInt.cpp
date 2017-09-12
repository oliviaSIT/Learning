class Solution {
public:
    int romanToInt(string s) {
        if (s.empty()) return -1;
        
        unordered_map<char, int> M = { { 'I' , 1 },
                                       { 'V' , 5 },
                                       { 'X' , 10 },
                                       { 'L' , 50 },
                                       { 'C' , 100 },
                                       { 'D' , 500 },
                                       { 'M' , 1000 } };
            
        int n = s.size();
        if ( n == 1) return M[s[0]];
        
        int t = M[s[n - 1]];
        for (int i = n - 1; i > 0; i--) {
            if (M[s[i]] <= M[s[i - 1]]) {
                t += M[s[i - 1]];
            } else {
                t -= M[s[i - 1]];
            } 
        }
    
    return t;    
    }
};

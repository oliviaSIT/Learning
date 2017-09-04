#include<iostream>
#include<vector>

using namespace std;

class solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0;

        int n = nums.size();
        int count = 0;
        for (int i = 1; i < n; i++) {
            if (nums[i] == nums[i-1]) {
                count++;
            }
            else {
                nums[i-count] = nums[i];
            }
      
        }

    return n-count;
    }
};

int main() {
    solution sol; 
    vector<int> x = {1,1,2,2,3,4};
    
    cout << sol.removeDuplicates(x) << endl;
    return 0;
}

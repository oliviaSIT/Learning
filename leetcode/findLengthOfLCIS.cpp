/*
 * https://leetcode.com/problems/longest-continuous-increasing-subsequence/description/
 */

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
	int n = 0, temp = 0;
	for (int i = 0; i < nums.size(); i++) {
		if (i == 0 || nums[i - 1] < nums[i]) {
			temp = max(temp, ++n);
		}
		else {
			n = 1;
		}
	}
        
	return temp;		
    }
};


int main() {
   Solution x;
   vector<int> nums = {2, 2, 2, 2};
   cout << x.findLengthOfLCIS(nums) << endl;
   return 0;
}

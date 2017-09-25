//https://leetcode.com/problems/search-insert-position/description/
//easy finish in 11min

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
	if (nums.size() == 0)
		return 0;	

	int i = 0;
	while (i < nums.size()) {
		if (target <= nums[i])
			return i;
		else  
			i++;		     
	}

	return i;        
    }
};

int main() {
	Solution x;
	vector<int> nums = {1, 3, 5, 6};
	int ans = x.searchInsert(nums, 5);
	cout << ans << endl;
	return 0;
}

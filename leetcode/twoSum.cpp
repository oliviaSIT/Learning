#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
	if (nums.size() <= 1) {
		return {-1, -1};
	}

        unordered_map<int, vector<int>> map;
        for (int i = 0; i < nums.size(); i++) {
		map[nums[i]].push_back(i);
	}      

	sort(nums.begin(), nums.end());
	int st = 0;
	int ed = nums.size() - 1;
	while (st < ed) {
		if (nums[st] + nums[ed] == target) {
			if (nums[st] == nums[ed]) {
				return {map[nums[st]][0], map[nums[ed]][1]};
			} else {
				return {map[nums[st]][0], map[nums[ed]][0]};
			} 
		} else if (nums[st] + nums [ed] < target) {
				st++;
			} else {
				ed--;
			}
	}

	return {-1, -1};
    }
};

int main() {
    Solution sol;

    vector<int> nums = {1, 2, 4};
    vector<int> res = sol.twoSum(nums, 6);

    cout << res[0] << ", " << res[1] << endl;

    return 0;
}

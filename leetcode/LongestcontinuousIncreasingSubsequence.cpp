/* https://leetcode.com/problems/longest-continuous-increasing-subsequence/description/
 *Given an unsorted array of integers, find the length of longest continuous increasing subsequence.
 */

// solution1:

#include <iostream>
#include <vector>
#include <algorithm>

class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int res = 0, cnt = 0;
	
	for (int i = 0; i < nums.size(); i++) {
		if (i == 0 || nums[i-1] < nums[i]) {
			cnt++;
		} else {
			res = max (res, cnt);
			cnt = 1;// note: restart from 1
		}
	}

	res = max(res, cnt);
	return res;	
    }
};

// solution2:

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


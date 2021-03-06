/*
 * https://leetcode.com/problems/implement-strstr/description/
 */

#include<string>
#include<iostream>

using namespace std;
class Solution {
public:
	int strStr(string haystack, string needle) {
		int m = haystack.size(), n = needle.size();

		if (needle.empty()) return 0;

		for (int i = 0; i < m - n + 1; i++) {
			int j = 0;
			for (; j < n; j++) {
				if (haystack[i + j] != needle[j]) break;
			}
			
			if (j == n) return i;
		}	

	return -1;
	}
};

int main() {
	Solution x;

        string h = "helloworld", needle = "llowo";

        cout << x.strStr(h, needle) << endl

        return 0;
}

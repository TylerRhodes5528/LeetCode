#pragma once
#include <iostream>
#include <vector>

class Solution {
public:
	int removeElement(std::vector<int>& nums, int val) {
		if (nums.size() == 0) {
			return 0;
		}
		
		int index = 0;
		while (index < nums.size()) {
			if (nums[index] == val) {
				nums.erase(nums.begin() + index);
			}
			else {
				++index;
			}
		}
		return nums.size();
	}
};
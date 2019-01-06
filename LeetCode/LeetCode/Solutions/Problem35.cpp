#include <iostream>
#include <vector>

class Solution {
public:
	int searchInsert(std::vector<int>& nums, int target) {
		if (nums.size() == 0) {
			return 0;
		}

		int index = 0;
		while (nums[index] < target && index < nums.size()) {
			++index;
		}
		return index;
	}
};
//--------------Binary Search Version-------------------------
class Solution2 {
public:
	int searchInsert(std::vector<int>& nums, int target) {
		int index = nums.size() / 2;
		if (nums.size() == 0) {
			return 0;
		}
		if (nums[index] == target) {
			return nums.size() / 2;
		}
		else if (nums[index] < target) {
			while (nums[index] < target && index < nums.size()) {
				++index;
			}
		}
		else {
			index = 0;
			while (nums[index] < target) {
				++index;
			}
		}

		return index;
	}
};
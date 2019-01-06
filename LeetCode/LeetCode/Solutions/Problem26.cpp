// LeetCode 26. Remove Duplicates From Sorted Array
#pragma once
#include <vector>
class Solution {
public:
	int removeDuplicates(std::vector<int>& nums) {
		if (nums.size() == 0) { // If nums is empty everything is already done
			return 0;
		}
		int* arr = new int[nums.size()];
		int lastElementInArr = 0;

		arr[0] = nums[0];
		for (int i = 1; i < nums.size(); i++) {
			if (arr[lastElementInArr] == nums[i]) {
				nums.erase(nums.begin() + i); // Erases the ith element of nums which also reduces the size of the container
				--i; // Because nums[i] got removed decrement i by one and then the for loop increment by one causes i to stay the same
			}
			else {
				arr[lastElementInArr + 1] = nums[i];
				++lastElementInArr;
			}
		}

		delete[] arr;

		return nums.size();
	}
};
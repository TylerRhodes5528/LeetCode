//Given n non-negative integers a1, a2, ..., an , where each represents a point
//at coordinate (i, ai). n vertical lines are drawn such that the 
//two endpoints of line i is at (i, ai) and (i, 0). 
//Find two lines, which together with x-axis forms a container, 
//such that the container contains the most water.
//
//Note: You may not slant the container and n is at least 2.

#include <iostream>
#include <vector>

//-----------Brute Force Solution----------------
// Time complexity is o(n^2) I think
class Solution {
public:
	int maxArea(std::vector<int>& height) {
		int maxArea = 0;
		int smallerY = 0;
		int width = 0;
		int maxHeight = 0;

		for (int i = 0; i < height.size(); i++) { // Calculates Maximum possible height
			if (maxHeight < height[i]) {
				maxHeight = height[i];
			}
		}

		for (int i = 0; i < height.size() - 1; i++) {
			if ((height.size() - i) * maxHeight < maxArea) { // Checks if it's possible for there to be a larger area
				break;
			}

			for (int ii = 1; ii < height.size(); ii++) {
				if (height[i] <= height[ii]) { // Height for square area is lower column
					smallerY = height[i];
				}
				else {
					smallerY = height[ii];
				}
				width = ii - i;

				if (maxArea < smallerY * width) { // Check if old max area is less than current one
					maxArea = smallerY * width;
				}
			}
		}
		return maxArea;
	}
};

//-----------Two Pointer Solution-----------------
// Time complexity should be o(n)
// 1. There are two pointers that begin by pointing to the leftmost and rightmost element
// 2. Loop 3 - 6 until the pointers point at the same element
// 3. If the two elements pointed to make a larger maxArea, then that's the new maxArea
// 4. Because the elements start at the ends, the Width value begins maxed out
// 5. However, there might be a height value large enough that it's worth having a smaller width
// 6. Because only the smallest height value of the two elements counts, move the smaller one inward
// 7. Return maxArea
class Solution2 {
public:
	int maxArea(std::vector<int>& height) {
		int maxArea = 0;
		int smallerY = 0;
		int width = 0;
		int* arrPtr1 = &height[0];
		int* arrPtr2 = &height[height.size() - 1];

		while (arrPtr1 != arrPtr2) {
			width = arrPtr2 - arrPtr1;
			if (*arrPtr1 < *arrPtr2) {
				smallerY = *arrPtr1;
				if (maxArea < smallerY * width) {
					maxArea = smallerY * width;
				}
				++arrPtr1;
			}
			else {
				smallerY = *arrPtr2;
				if (maxArea < smallerY * width) {
					maxArea = smallerY * width;
				}
				--arrPtr2;
			}
		}
		return maxArea;
	}
};
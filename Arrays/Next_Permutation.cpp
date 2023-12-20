/*
QUESTION
Given an array of integers nums, find the next permutation of nums.
The replacement must be in place and use only constant extra memory.
Example 1:

Input: nums = [1,2,3]
Output: [1,3,2]
Example 2:

Input: nums = [3,2,1]
Output: [1,2,3]

CODE 
*/class Solution {
public:
    void nextPermutation(vector<int>& nums) {
    	int n = nums.size(), k, l;
    	for (k = n - 2; k >= 0; k--) {
            if (nums[k] < nums[k + 1]) {
                break;
            }
        }
    	if (k < 0) {
    	    reverse(nums.begin(), nums.end());
    	} else {
    	    for (l = n - 1; l > k; l--) {
                if (nums[l] > nums[k]) {
                    break;
                }
            } 
    	    swap(nums[k], nums[l]);
    	    reverse(nums.begin() + k + 1, nums.end());
        }
    }
}; 

// here is an example:
// 2,3,6,5,4,1

// Solution:
// Step1, from right to left, find the first number that does not increase in ascending order. In this case which is 3.
// Step2, here we can have two situations:

// We cannot find the number, all the numbers increasing in ascending order. This means this permutation is the last permutation, 
//we need to rotate back to the first permutation. So we reverse the whole array, for example, 6,5,4,3,2,1 we turn it to 1,2,3,4,5,6.

// We can find the number, then the next step, we will start from rightmost to leftward, try to find the first number which is larger than 3, in this case it is 4.
// Then we swap 3 and 4, the list turns to 2,4,6,5,3,1.
// Last, we reverse numbers on the right of 4, and we finally get 2,4,1,3,5,6.

// Time complexity is: O(3*n)=O(n).
  

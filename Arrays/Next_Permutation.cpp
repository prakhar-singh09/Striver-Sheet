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
*/
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int ind = -1;
        for(int i=n-2;i>=0;i--){
             if(nums[i]<nums[i+1])
             {
                  ind = i;
                  break;
             }
        }
        if(ind == -1){
          reverse(nums.begin(),nums.end());
        }
        else{
        for(int i= nums.size()-1;i>=0;i--){
          if(nums[i]>nums[ind]){
            swap(nums[i],nums[ind]);
            break;
          }
        }
          reverse(nums.begin()+ind+1,nums.end());
        
        }
    }
}; 
  

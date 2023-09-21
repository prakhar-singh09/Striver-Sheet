QUESTION
// Given an integer array nums, find the subarray with the largest sum, and return its sum.
ANSWER
//Kadane's Algo
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
       int ans = INT_MIN;
       int curr = 0;
       for(int i=0;i<nums.size();i++){
         curr = nums[i] + curr;
            if(curr>ans){
                ans = curr;  
            }
            if(curr<0)
            curr = 0;
       }
       return ans;
    }
};

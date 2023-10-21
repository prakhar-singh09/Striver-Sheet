// Given an unsorted array of integers nums, return the length of the longest consecutive elements sequence.

// You must write an algorithm that runs in O(n) time.

 

// Example 1:

// Input: nums = [100,4,200,1,3,2]
// Output: 4
// Explanation: The longest consecutive elements sequence is [1, 2, 3, 4]. Therefore its length is 4.
// Example 2:

// Input: nums = [0,3,7,2,5,8,4,6,0,1]
// Output: 9
// CODE
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
       int n = nums.size();
      int longest=0;
       if(n==0) return 0;
       unordered_set<int>st;
       for(auto it:nums){
           st.insert(it);
       }
       for(auto it:st){
           if(st.find(it-1) == st.end()){
               int count = 1;
               int x = it;
               while(st.find(x+1) != st.end()){
                  count++;
                  x = x+1;    
               }
                longest = max(longest,count);
           }
       }
       return longest;
    }
};


// Time Complexity: O(n)
// Space Complexity: O(n)




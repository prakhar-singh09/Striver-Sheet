// Given a string s, find the length of the longest substring without repeating characters.
// Example 1:

// Input: s = "abcabcbb"
// Output: 3
// Explanation: The answer is "abc", with the length of 3.
// Example 2:

// Input: s = "bbbbb"
// Output: 1
// Explanation: The answer is "b", with the length of 1.

// CODE
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int start = 0;
        int end=0;
        int max=0;
        unordered_set<char>st;
        while(start<s.size()){
         auto it = st.find(s[start]);
         if(it == st.end())
         {
             if(start-end+1> max)
             max= start-end+1;
             st.insert(s[start]);
             start++;
         }
         else
         {
             st.erase(s[end]);
             end++;
         }
        }
        return max;
    }
};

// Time complexity:
// O(2n)

// Space complexity:
// O(n)

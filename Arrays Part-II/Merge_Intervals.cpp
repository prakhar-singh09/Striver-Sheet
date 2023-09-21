Given an array of intervals where intervals[i] = [starti, endi], merge all overlapping intervals, and return an array of the non-overlapping intervals that cover all the intervals in the input.
  CODE
  class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
    vector<vector<int>> mergedintervals;
        if(intervals.size()==0)
            return mergedintervals;
        sort(intervals.begin(),intervals.end());
        vector<int> tempinterval = intervals[0];
    for(auto it: intervals){
        if(it[0]<=tempinterval[1]){
            tempinterval[1]= max(it[1],tempinterval[1]);
        }
        else{
            mergedintervals.push_back(tempinterval);
            tempinterval = it;
        }
    }
     mergedintervals.push_back(tempinterval);
    return mergedintervals;
    }
};

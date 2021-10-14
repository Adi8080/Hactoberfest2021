#include<bits/stdc++.h>

using namespace std;
   
vector<vector<int>> merge(vector<vector<int>>& intervals)
{
    vector<vector<int>> mergedIntervals;
    if(intervals.size()==0)
        return mergedIntervals;
        
    sort(intervals.begin(),intervals.end());
    vector<int> pre_interval = intervals[0];
        
    for(auto interval:intervals)
    {
        if(interval[0]<=pre_interval[1])
        {
            pre_interval[1]=max(interval[1],pre_interval[1]);
        }
        else
        { 
            mergedIntervals.push_back(pre_interval);
            pre_interval=interval;
        }     
    }
        
    mergedIntervals.push_back(pre_interval);
    return mergedIntervals;
}
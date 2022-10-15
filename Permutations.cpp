//Permutation : https://leetcode.com/problems/permutations/
#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> permute(vector<int> &nums)
{

    vector<vector<int>> ans;
    sort(nums.begin(), nums.end());

    do
    {
        ans.push_back(nums);

    } while (next_permutation(nums.begin(), nums.end()));

    return ans;
}

    int main()
    {

        int n;
        cin >> n;
        vector<int>nums(n);

        for(int i=0;i<n;i++)
        {
            cin>>nums[i];
        }

         vector<vector<int>>res;
         res = permute(nums);

         for(int i=0;i<res.size();i++)
         {
             for(int j=0;j<res[i].size();j++)
             {
                 cout<<res[i][j]<<" ";
             }
             cout<<endl;
         }
    }

#include<bits/stdc++.h>
using namespace std;

    std::vector<int> dp = std::vector<int>(100,0);
    
    int climbStairs(int n) {
        
        
        // n = 1, 1 way
        //n =2, 2 ways i.e., 1+1 and 2
        
        if(dp[n]!=0)
        {    
            return dp[n];
        }
        else
        {
            if(n==1)
            {    
                dp[n] = 1;
            }
            else if(n==2)
            {    
                dp[n] = 2;
            }
            else
            {
                int ans =  climbStairs(n-1) + climbStairs(n-2);
                dp[n] = ans;
            }
            return dp[n];
        }    
    }

    int main()
    {

    int n=0;
    cout<<"\nIt is given that at a given time you can climb either one or two staris.";
    cout<<"\nEnter total number of staris to climb(should be less than 70):";
    cin>>n;
    cout<<"/n Total possible ways to climb all staris ="<<climbStairs(n);
    return 0;

    }



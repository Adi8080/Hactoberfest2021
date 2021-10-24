/* C++ program to calculate sum of all numbers present in a string containing alphanumeric characters
Input:
str = 1abc23
Output: 24
Explanation: 1 and 23 are numbers in the
string which is added to get the sum as
24. */

#include <iostream>
using namespace std;


class Solution
{
    public:
    //Function to calculate sum of all numbers present in a string.
    int findSum(string str)
    {
    	int sum=0;
    	int n = str.size();
    	int ans=0;
    	for(int i=0; i<n; i++){
    	    if(str[i]>='0' && str[i]<='9'){
    	        ans=ans*10+(str[i]-'0');
    	    }
    	    else{
    	        sum=sum+ans;
    	        ans=0;
    	    }
    	}
    	return sum+ans;
    	
    	    }
};

int main()
{
	// input alphanumeric string
	
	    string str;
	    cin>>str;
	    Solution obj;
	    cout << obj.findSum(str);
        cout<<endl;
	
	return 0;
}
 

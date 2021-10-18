int Solution::maximumGap(const vector<int> &A) {
    int n=A.size();
    int rightMax[n];
    rightMax[n-1]= A[n-1];
    for(int i = n-2; i>=0; i--)
    rightMax[i] = max(rightMax[i+1] , A[i]);
    int maxDist = INT_MIN;
    int i = 0, j = 0;
    while(i<n && j<n)
    {
     if(rightMax[j] >= A[i])
    {
      maxDist = max( maxDist, j-i );
      j++;
    }
     else
     i++;
    } 
    return maxDist;
}

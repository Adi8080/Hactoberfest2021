#include <bits/stdc++.h> 
using namespace std; 

class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        // code here
        vector<int> arr;
        int top = 0, right = c-1, bottom = r-1, left = 0;
        
        while(top <= bottom && left <= right){
            // top row
            for(int i=left;i<=right;i++){
                arr.push_back(matrix[top][i]);
            }
            top++;
            // right column
            for(int i=top;i<=bottom;i++){
                arr.push_back(matrix[i][right]);
            }
            right--;
            
            if(top <= bottom){
                // bottom row
                for(int i=right;i>=left;i--){
                    arr.push_back(matrix[bottom][i]);
                }
                bottom--;
            }
            if(left <= right){
                // left column
                for(int i=bottom;i>=top;i--){
                    arr.push_back(matrix[i][left]);
                }
                left++;
            }
        }
        return arr;
    }
};

int main() {
        int r,c;
        cin>>r>>c;
        vector<vector<int> > matrix(r); 
        cout<<"Enter matrix elements : ";
        for(int i=0; i<r; i++)
        {
            matrix[i].assign(c, 0);
            for( int j=0; j<c; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix, r, c);
        cout<<"Result : ";
        for (int i = 0; i < result.size(); ++i)
            cout<<result[i]<<" ";
        cout<<endl;
    return 0;
}
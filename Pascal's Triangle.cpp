vector<vector<int>> generate(int numRows) {
        vector<vector<int>> v(numRows);
        v[0]={1};
        for(int i=1;i<numRows;i++){
            v[i].resize(i+1);
            v[i][0]=1;
            for(int j=1;j<i;j++){
                v[i][j]= v[i-1][j]+v[i-1][j-1];
            }
            v[i][i]=1;
        }
        return v;
    }

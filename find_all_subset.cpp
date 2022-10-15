#include<bits/stdc++.h>
using namespace std;
void  find(vector<int>&v,int index,vector<int>&cur,vector<vector<int>>&res){
   res.push_back(cur);
	for(int i=index;i<v.size();i++){
		cur.push_back(v[i]);
		find(v,i+1,cur,res);
		cur.pop_back();
	}
}
vector<vector<int>> subset(vector<int>&v){
	vector<int>cur;
	int index=0;
	vector<vector<int>>res;
	find(v,index,cur,res);
	return res;
}
int main(){
	vector<int>v={1,2,3};
	vector<vector<int>>p=subset(v);
	for (int i = 0; i < p.size(); i++) {
        for (int j = 0; j < p[i].size(); j++)
            cout << p[i][j] << " ";
        cout << endl;
    }

}

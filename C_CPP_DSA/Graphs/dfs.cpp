#include <bits/stdc++.h>
using namespace std;

void dfs(int node, vector<int> &vis, vector<int> adj[], vector<int> &storeDfs){
	storeDfs.push_back(node);
	vis[node]=1;
	for(auto it: adj[node]){
		if(!vis[it]){
			dfs(it, vis, adj, storeDfs);
		}
	}
}

vector<int> dfsOfGraph(int n, vector<int> v[]){
	vector<int> vis(n+1,0);
	vector<int> storeDfs;

	for(int i=1;i<=n;i++){
		if(!vis[i]){
			dfs(i,vis, v,storeDfs);
		}
	}	
	return storeDfs;
}

int main()
{
	int n,m;
	cin>>n>>m;
	
	//declaration of graph
	vector<int> v[n+1];
	int i,j,x,y;
	for(i=0;i<m;i++){
		cin>>x>>y;
		v[x].push_back(y);
		v[y].push_back(x);
	}

	vector<int> dfs = dfsOfGraph(n, v);
	for(auto it : dfs)
		cout<<it<<' ';
	return 0;
}
#include <bits/stdc++.h>
using namespace std;

vector<int> bfsOfGraph(int n, vector<int> adj[]){

	vector<int> bfs;
	vector<int> vis(n+1, 0);

	for(int i=1; i<=n;i++){
		if(!vis[i]){

			queue<int> q;
			q.push(i);
			vis[i] = 1;
			while(!q.empty()){
				int node = q.front();
				q.pop();
				bfs.push_back(node);

				for(auto it: adj[node]){
					if(!vis[it]){
						q.push(it);
						vis[it] = 1;
					}
				}
			}
		}
	}
	return bfs;
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

	vector<int> bfs = bfsOfGraph(n, v);
	for(auto it : bfs)
		cout<<it<<' ';
	return 0;
}
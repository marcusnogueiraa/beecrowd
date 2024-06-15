#include <bits/stdc++.h>

#define endl '\n'

using namespace std;

vector<vector<int>> adj;
vector<bool> vis;

void dfs(int s){
	vis[s] = true;
	for(auto w : adj[s]) if (!vis[w]){
		dfs(w);
	}
}

int main(){
	cin.tie(0)->sync_with_stdio(0);
	int e, l;
	int t = 0;
	while(cin >> e >> l){
		if (e == 0) return 0;
		
		adj.assign(e, vector<int>());
		vis.assign(e, false);

		for(int i = 0; i < l; i++){
			int a, b;
			cin >> a >> b;
			a--; b--;

			adj[a].push_back(b);
			adj[b].push_back(a);
		}

		dfs(0);

		int ok = true;
		for(int i = 1; i < e; i++){
			if (!vis[i]){
				ok = false;
				break;
			}
		}

		cout << "Teste " << ++t << endl;
		if (ok) cout << "normal" << endl;
		else cout << "falha" << endl;
		cout << endl;
	}	
}

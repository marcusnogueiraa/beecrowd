#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
const int MAXV = 5*(1e4)+10;
vector<vector<int>> G(MAXV);
vector<bool> vis(MAXV);
void dfs(int s){
 vis[s] = true;
 for(auto w : G[s]) if (!vis[w]){
  dfs(w);
 }
}
int main(){
 cin.tie(0)->sync_with_stdio(0);
 int n, m;
 cin >> n >> m;
 for(int i = 0; i < m; i++){
  int a, b; cin >> a >> b; a--; b--;
  G[a].push_back(b);
  G[b].push_back(a);
 }
 int families = 0;
 for(int i = 0; i < n; i++) if (!vis[i]){
  dfs(i);
  families++;
 }
 cout << families << endl;
}

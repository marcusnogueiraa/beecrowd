#include <bits/stdc++.h>

#define endl '\n'

using namespace std;
        
const int INF = (int) 1e9;

int memo[1000100];
int n, cmp;
vector<int> statues;

int solve(){
    for(int i = 1; i <= cmp; i++){
        memo[i] = INF;

        for(int j = 0; j < n; j++){
            if (i-statues[j] >= 0){
                memo[i] = min(memo[i], memo[i-statues[j]] + 1);
            }
        }
    }

    return memo[cmp];
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin >> t;
    while(t--){
        cin >> n >> cmp;
        statues.resize(n);
        for(int i = 0; i < n; i++) cin >> statues[i];

        cout << solve() << endl;
    }
}
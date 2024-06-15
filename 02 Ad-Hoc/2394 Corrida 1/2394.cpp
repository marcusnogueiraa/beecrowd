#include <bits/stdc++.h>

#define endl '\n'
#define INF INT_MAX;

using namespace std;

int main(){
    int n, m; cin >> n >> m;

    int index_winner = 0; int time_winner = INF;
    for(int i = 1; i <= n; i++){
        int tot = 0;
        for(int k = 0; k < m; k++){
            int volt; cin >> volt;
            tot += volt;
        }
        if (time_winner > tot){
            time_winner = tot;
            index_winner = i;
        }
    }

    cout << index_winner << endl;
}
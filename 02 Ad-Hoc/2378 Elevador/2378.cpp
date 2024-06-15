#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main(){
    int n, c; cin >> n >> c;

    bool ok = true;
    ll tot = 0;
    for (int i = 0; i < n; i++){
        int e, s; cin >> s >> e;

        tot -= s;
        tot += e;
        if (tot > c){
            ok = false;
        }
    }

    if (ok) cout << "N" << endl;
    else cout << "S" << endl;
}
#include <bits/stdc++.h>

#define endl '\n'

using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int n; cin >> n;
    vector<int> vet(n), prefix(n+1);

    prefix[0] = 0;

    int maxP = 0, minP = 0;
    for(int i = 0; i < n; i++){
        cin >> vet[i];
        prefix[i+1] = prefix[i] + vet[i];
        minP = min(minP, prefix[i+1]);
        maxP = max(maxP, prefix[i+1]);
    }

    cout << maxP - minP << endl;
}
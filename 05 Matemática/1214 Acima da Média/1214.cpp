#include <bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int vet[n];
        double tot = 0;
        for(int i = 0; i < n; i++){
            cin >> vet[i];
            tot += vet[i];
        }

        double med = (double) tot / n;

        double acima = 0;
        for(int i = 0; i < n; i++){
            if (vet[i] > med) acima++;
        }

        cout << fixed << setprecision(3) << ((double) acima/n) * 100 << "%" << endl;
    }
}
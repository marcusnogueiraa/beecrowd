#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    while(cin >> n){
        int vet[n];
        for(int i = 0; i < n; i++) cin >> vet[i];
        sort(vet, vet+n);

        if (n % 2 == 1) cout << vet[n/2] << endl;
        else {
            cout << (vet[n/2 -1] + vet[n/2])/2 << endl;
        }
    }
}
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int vet[n];
    for(int i = 0; i < n; i++) cin >> vet[i];

    int k;
    cin >> k;

    int l = 0, r = n-1;
    while (l < r){
        int soma = vet[l] + vet[r];
        
        if (soma == k) break;
        else if (soma > k) r--;
        else if (soma < k) l++;
    }

    cout << vet[l] << " " << vet[r] << endl;
}
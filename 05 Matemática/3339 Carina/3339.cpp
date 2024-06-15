#include <bits/stdc++.h>

#define endl '\n'

using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int q; cin >> q;
    while(q--){
        int l, r;
        cin >> l >> r;
        int sup, inf;
        if (l > 0) inf = sqrt(l-1);
        else inf = -1;

        sup = sqrt(r);

        cout << sup - inf << endl;
    }
}
#include <bits/stdc++.h>

#define endl '\n'
#define ll long long

using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int n, k;
    while(cin >> n >> k){
        priority_queue<ll> pq;
        for(int i = 0; i < n; i++){
            ll val;
            cin >> val;
            pq.push(val);
        }

        ll tot = 0;
        for(int i= 0; i < k; i++){
            ll val = pq.top(); pq.pop();
            tot += val;
        }
        cout << tot % 1000000007 << endl;
    }
}
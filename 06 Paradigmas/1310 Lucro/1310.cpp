#include <bits/stdc++.h>

#define endl '\n'

using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int n, c;
    while(cin >> n){
        cin >> c;
        vector<int> arr(n);
        
        int val;
        for(int i = 0; i < n; i++) {
            cin >> val;
            arr[i] = val - c;
        }
        
        int best = 0, sum = 0;
        for (int k = 0; k < n; k++) {
            sum = max(arr[k],sum+arr[k]);
            best = max(best,sum);
        }
        cout << best << endl;
    }
}

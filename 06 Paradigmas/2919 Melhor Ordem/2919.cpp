#include <bits/stdc++.h>

#define _ cin.tie(0)->sync_with_stdio(0);
#define endl '\n'
#define PB push_back

using namespace std;

int LIS(vector<int> &arr){
    vector<int> stacks;

    for(int i = 0; i < arr.size(); i++){
        auto it = lower_bound(stacks.begin(), stacks.end(), arr[i]);
        if (it == stacks.end()) stacks.PB(arr[i]);
        else *it = arr[i];
    }

    return stacks.size();
}

int main(){ _
    int n;
    while(cin >> n){
        vector<int> arr(n);

        for(int i = 0; i < n; i++) cin >> arr[i];

        cout << LIS(arr) << endl;
    }
}
#include <bits/stdc++.h>

#define endl '\n'

using namespace std;

int main(){
    int v, t; cin >> v >> t;
    for(int i = 0; i < t; i++){
        int val; cin >> val;
        if (val >= 0) v = min(100, v + val);
        else v = max(0, v + val);
    }
    cout << v << endl;
}
#include <bits/stdc++.h>

#define endl '\n'
#define ii pair<int, int>

using namespace std;

stack<ii> stk;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin >> n;
    while(n--){
        string op;
        cin >> op;

        if (op == "PUSH"){
            int val, new_min; cin >> val;
            
            if (stk.empty()) new_min = val;
            else new_min = min(val, stk.top().second);

            stk.push({val, new_min});
        }

        else if (op == "POP"){
            if (stk.empty()){
                cout << "EMPTY" << endl;
            } else {
                stk.pop();
            }
        }

        else {
            if (stk.empty()){
                cout << "EMPTY" << endl;
            } else {
                int min_value = stk.top().second;
                cout << min_value << endl;
            }
        }
    }
}
#include <bits/stdc++.h>

#define endl '\n'

using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    string op;
    vector<string> vet;
    while(cin >> op){
        if (op == "0"){
            sort(vet.begin(), vet.end());
            for(string s : vet){
                cout << "Package " << s << endl;
            }
            cout << endl;
            vet.clear();
            continue;
        }

        if (op == "Package"){
            string number;
            cin >> number;
            vet.push_back(number);
        }
    }
}
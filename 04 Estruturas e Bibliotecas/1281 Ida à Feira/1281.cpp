#include <bits/stdc++.h>

#define endl '\n'

using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int n; cin >> n;
    while(n--){
        int m; cin >> m;
        unordered_map<string, double> prices;
        for(int i = 0; i < m; i++){
            string prod; double price;
            cin >> prod >> price;
            prices[prod] = price;
        }

        cin >> m;
        double tot = 0.0;
        for(int i = 0; i < m; i++){
            string prod; int qtd;
            cin >> prod >> qtd;
            tot += prices[prod] * qtd;
        }

        cout << "R$ " << fixed << setprecision(2) << tot << endl;
    }
}
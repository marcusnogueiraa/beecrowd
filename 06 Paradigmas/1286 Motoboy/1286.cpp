#include <bits/stdc++.h>

#define endl '\n'

using namespace std;

int n, p;
vector<int> W;
vector<int> V;

const int mINF = numeric_limits<int>::min();

int MEMO[100][100];

int dp(int pedido, int capacidade) {
    if (capacidade < 0) return mINF;
    if (pedido == n) return 0;
    if (MEMO[pedido][capacidade] != -1) return MEMO[pedido][capacidade];

    // Caso o item não seja incluído
    int sem_item = dp(pedido + 1, capacidade);
    // Caso o item seja incluído
    int com_item = dp(pedido + 1, capacidade - W[pedido]) + V[pedido];

    MEMO[pedido][capacidade] = max(sem_item, com_item);
    return MEMO[pedido][capacidade];
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    while (cin >> n) {
        if (n == 0) break;
        cin >> p;

        W.resize(n);
        V.resize(n);
        memset(MEMO, -1, sizeof MEMO);

        for (int i = 0; i < n; i++) {
            int a, b;
            cin >> a >> b;
            V[i] = a;
            W[i] = b;
        }

        cout << dp(0, p) << " min." << endl;
    }

    return 0;
}

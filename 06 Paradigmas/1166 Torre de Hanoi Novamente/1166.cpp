#include <bits/stdc++.h>

using namespace std;

bool adicionar_bola(vector<vector<int>>& haste, int bola) {
    for (auto& vareta : haste) {
        if (!vareta.empty()) {
            double raiz = sqrt(vareta.back() + bola);
            if (raiz == static_cast<int>(raiz)) {
                vareta.push_back(bola);
                return true;
            }
        } else {
            vareta.push_back(bola);
            return true;
        }
    }
    return false;
}

int main() {
    int cases;
    cin >> cases;

    for (int i = 0; i < cases; ++i) {
        vector<vector<int>> haste;
        int num;
        cin >> num;

        haste.resize(num);

        int bola = 1;
        int numero_bolas = 0;
        while (true) {
            if (!adicionar_bola(haste, bola)) {
                cout << numero_bolas << endl;
                break;
            }
            ++numero_bolas;
            ++bola;
        }
    }

    return 0;
}

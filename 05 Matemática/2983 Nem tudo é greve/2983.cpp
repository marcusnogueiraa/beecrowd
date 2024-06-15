#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool is_primo(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

bool busca_sequencial(const vector<int>& v, int num) {
    return find(v.begin(), v.end(), num) != v.end();
}

int main() {
    int N, num;
    vector<int> v;

    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> num;
        if (is_primo(num) && !busca_sequencial(v, num)) {
            v.push_back(num);
        }
    }

    sort(v.begin(), v.end());
    
    cout << v.size() << endl;

    if (v.empty()) {
        cout << endl;
        return 0;
    }

    for (size_t i = 0; i < v.size(); i++) {
        if (i == v.size() - 1) cout << v[i] << "." << endl;
        else cout << v[i] << ", ";
    }

    return 0;
}

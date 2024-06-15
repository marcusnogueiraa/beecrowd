#include <bits/stdc++.h>

using namespace std;

bool is_primo(int num) {
    if (num <= 1) {
        return false;
    }

    int divisor = 2;
    while (divisor * divisor <= num) {
        if (num % divisor == 0) {
            return false;
        }
        ++divisor;
    }

    return true;
}

int main() {
    int cases;
    cin >> cases;

    for (int i = 0; i < cases; ++i) {
        int num;
        cin >> num;
        if (is_primo(num)) {
            cout << "Prime" << endl;
        } else {
            cout << "Not Prime" << endl;
        }
    }

    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int MDC(int num1, int num2) {
    if (num2 == 0) {
        return num1;
    } else {
        return MDC(num2, num1 % num2);
    }
}

int main() {
    int cases;
    cin >> cases;

    for (int i = 0; i < cases; ++i) {
        int num_ricardo, num_vicente;
        cin >> num_ricardo >> num_vicente;
        cout << MDC(num_ricardo, num_vicente) << endl;
    }

    return 0;
}

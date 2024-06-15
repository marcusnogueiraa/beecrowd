#include <bits/stdc++.h>

using namespace std;

long long factorial(int num) {
    long long result = 1;
    for (int i = num; i > 0; --i) {
        result *= i;
    }
    return result;
}

int main() {
    int num1, num2;
    while (cin >> num1 >> num2) {
        cout << factorial(num1) + factorial(num2) << endl;
    }
    return 0;
}

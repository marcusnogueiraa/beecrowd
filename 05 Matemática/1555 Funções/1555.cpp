#include <bits/stdc++.h>

using namespace std;

int main() {
    int cases;
    cin >> cases;

    for (int i = 0; i < cases; ++i) {
        int x, y;
        cin >> x >> y;

        int FR = pow(3 * x, 2) + pow(y, 2); // (3 * x)^2 + y^2
        int FB = 2 * pow(x, 2) + pow(5 * y, 2); // 2 * (x^2) + (5 * y)^2
        int FC = -100 * x + pow(y, 3); // -100 * x + y^3

        if (FR > FB && FR > FC) {
            cout << "Rafael ganhou" << endl;
        } else if (FB > FR && FB > FC) {
            cout << "Beto ganhou" << endl;
        } else {
            cout << "Carlos ganhou" << endl;
        }
    }

    return 0;
}

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double area(double x1, double y1, double x2, double y2, double x3, double y3) {
    double area = 0.5 * abs(x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2));
    return area;
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int cases;
    cin >> cases;
    double x1, y1, x2, y2, x3, y3;
    for (int i = 0; i < cases; i++){
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
        cout << fixed << setprecision(3) << area(x1, y1, x2, y2, x3, y3) << endl;
    }
}

// https://www.beecrowd.com.br/judge/pt/problems/view/3102
// Ranking 00081º, Time 0.000, Submiss Date 09/06/2023 15:02:00 (C++17)
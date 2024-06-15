#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    if (a >= 0 or a%b==0){
        cout << a / b << " " << a % b << endl;
    } else if (b >= 0){
        int r = (a % b) + b;
        cout << (a - r) / b << " " << r << endl;
    } else {
        int r = -1 * (-1*(a%b) + b);
        cout << (a - r) / b << " " << r << endl;
    }
}

// https://www.beecrowd.com.br/judge/pt/problems/view/1837
// Ranking 03058º, Time 0.000, Submiss Date 24/05/2023 23:23:47 (C++17)
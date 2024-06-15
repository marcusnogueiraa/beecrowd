#include <iostream>

using namespace std;

// Função que calcula o MDC entre a e b usando o algoritmo de Euclides
long long gcd(long long a, long long b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

long long modular_inverse(long long a, long long m) {
    long long m0 = m;
    long long x0 = 0, x1 = 1;

    if (m == 1) {
        return 0;
    }

    while (a > 1) {
        // q é o quociente da divisão de a por m
        long long q = a / m;

        long long t = m;

        // m é o resto da divisão de a por m
        m = a % m;
        a = t;

        t = x0;
        x0 = x1 - q * x0;
        x1 = t;
    }

    if (x1 < 0) {
        x1 += m0;
    }

    return x1;
}

long long find_x(long long A, long long M) {
    long long x = modular_inverse(A, M);
    if (x == -1) {
        return -1; // O inverso modular não existe
    }

    int inverse_x = M - x;
    if ((A * inverse_x) % M == M - 1) {
        return inverse_x; // Retorna (-x) quando A * (-x) mod M = M - 1
    }

    return x; // Retorna x quando A * x mod M = 1
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    long long d, e;
    
    cin >> d >> e;

    if (d == 1 || e == 1){
        cout << 1 << endl;
        return 0;
    }

    if (gcd(d,e) != 1){
        cout << "IMPOSSIVEL\n";
        return 0;
    }

    long long x = find_x(d,e);

    long long inverse;
    long long inverse1 = modular_inverse(d, e);

    if (x < inverse1) inverse = x;
    else inverse = inverse1;

    long long total = inverse * d;
    while (total != 1 && total != -1){
        total -= e;
        inverse++;
    }

    cout << inverse << endl;

    return 0;
}

// https://www.beecrowd.com.br/judge/pt/problems/view/2858
// Ranking 00034º, Time 0.000, Submiss Date 19/07/2023 17:25:26 (C++17)
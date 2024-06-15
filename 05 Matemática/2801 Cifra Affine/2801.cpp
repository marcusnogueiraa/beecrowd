#include <iostream>
#include <cstring>

using namespace std;

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

int main(void)
{
    cin.tie(0)->sync_with_stdio(0);
	  int tam;
    cin >> tam;

    long long* vet = new long long[tam];
    for (int i = 0; i < tam; i++) cin >> vet[i];

    long long alfa, A, B;

    cin >> alfa >> A >> B;

    if (gcd(A, alfa) != 1){
        cout << "DECIFRAGEM AMBIGUA\n";
        return 0;
    }

    long long invA = modular_inverse(A, alfa);

    long long P = ((vet[0] - B) * invA) % alfa;
    if (P < 0) P = P + alfa;
    cout << P;
    for (int i = 1; i < tam; i++){
        long long P = ((vet[i] - B) * invA) % alfa;
        if (P < 0) P = P + alfa;
        
        cout << " " << P;
    }

    cout << endl;
}

// https://www.beecrowd.com.br/judge/pt/problems/view/2801
// Ranking 00046º, Time 0.185, Submiss Date 19/07/2023 17:25:26 (C++17)
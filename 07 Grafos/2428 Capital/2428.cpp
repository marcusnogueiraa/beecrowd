#include <iostream>

using namespace std;

void bubbleSort(int vetor[]) {
    int k, j, aux;

    for (k = 1; k < 4; k++) {
        for (j = 0; j < 3; j++) {
            if (vetor[j] > vetor[j + 1]) {
                aux = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = aux;
            }
        }
    }
}

int main() {
    int vetor[4];
    cin >> vetor[0] >> vetor[1] >> vetor[2] >> vetor[3];
    bubbleSort(vetor);
    if (vetor[0] * vetor[3] == vetor[1] * vetor[2]) {
        cout << "S" << endl;
    } else {
        cout << "N" << endl;
    }
    return 0;
}

// https://www.beecrowd.com.br/judge/pt/problems/view/2428
// Ranking 00164º, Time 0.000, Submiss Date 16/04/2023 18:31:49 (C++17)
#include <bits/stdc++.h>

using namespace std;

int facts[] = {1, 2, 6, 24, 120, 720, 5040, 40320};

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int N, tt = 0;
    cin >> N;
    int i = 7;
    while (N > 0){
        if (facts[i] > N) i--;
        else if (facts[i] <= N) {
            N = N - facts[i];
            tt++;
        }
    }

    cout << tt << endl;
    
}

// https://www.beecrowd.com.br/judge/pt/problems/view/1936
// Ranking 01368º, Time 0.000, Submiss Date 04/09/2023 14:00:23 (C++20)

#include <iostream>

#define ll long long

using namespace std;

const int MAX = 1e5+10;

int N, C, T;
int pipocas[MAX];

bool possivel(ll chute){
    int comp = 1;
    ll resta = T*chute;

    for (int i = 0; i < N; i++){
        if (resta >= pipocas[i]) resta -= pipocas[i];
        else {
            comp++;
            resta = T*chute;
            i--;
        }
        if (comp > C) return 0;
    }
    return 1;
}

int main(){
    cin >> N >> C >> T;
    for(int i = 0; i < N; i++) cin >> pipocas[i];

    int l = 0, r = 1e9+10;
    while (l < r){
        int m = (l+r)/2;

        if (!possivel(m)) l = m+1;
        else r = m; 
    }

    cout << l << endl;

    return 0;
}

// https://www.beecrowd.com.br/judge/pt/problems/view/2973
// Ranking 00058º, Time 0.000, Submiss Date 04/09/2023 00:43:05  (C++20)
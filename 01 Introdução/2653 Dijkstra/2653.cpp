#include <bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    unordered_set<string> set;
    string str;
    while(cin >> str) set.insert(str);
    cout << set.size() << endl;
}

// https://www.beecrowd.com.br/judge/pt/problems/view/2653
// Ranking 00069º, Time 0.000, Submiss Date 05/09/2023 00:14:59 (C++20)
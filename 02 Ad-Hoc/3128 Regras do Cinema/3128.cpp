#include <bits/stdc++.h>

#define endl '\n'

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    if (n >= 6 && m >= 6 && ((n >= 18 || m >= 18) || (n >= 14 && m >= 14))) cout << "YES" << endl;
    else cout << "NO" << endl;
}
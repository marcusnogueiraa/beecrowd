#include <bits/stdc++.h>
 
#define endl '\n'
 
using namespace std;

int josephus(int n, int k) {
    if (n == 1)
        return 0;
    if (k == 1)
        return n-1;
    if (k > n)
        return (josephus(n-1, k) + k) % n;
    int cnt = n / k;
    int res = josephus(n - cnt, k);
    res -= n % k;
    if (res < 0)
        res += n;
    else
        res += res / (k - 1);
    return res;
}

int main() {
 
    int t;
    cin >> t;
    
    for(int i = 1; i <= t; i++){
        int n, k;
        cin >> n >> k;
        cout << "Case " << i << ": " << josephus(n, k) + 1 << endl;
    }
 
    return 0;
}
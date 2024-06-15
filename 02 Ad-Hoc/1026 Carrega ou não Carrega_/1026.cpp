#include <iostream>

#define endl '\n'
#define ll long long

using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  ll A, B;
  while(cin >> A >> B){
    ll res = (A ^ B);
    cout << res << endl;
  }
}
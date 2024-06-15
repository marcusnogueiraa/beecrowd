#include <iostream>
#include <string>
#include <unordered_map>

#define ll long long
#define MOD 1000000007

using namespace std;

ll fat[200100];
int tam_fat = 1;

ll mdc(ll a, ll b, ll *x, ll *y)
{
    ll xx, yy, d;

    if (b == 0LL)
    {
        *x = 1LL;
        *y = 0LL;
        return a;
    }

    d = mdc(b, a % b, &xx, &yy);
    *x = yy;
    *y = xx - ((a / b) * yy);

    return d;
}

ll inv5(ll a)
{
    ll x, y, d;
    d = mdc(a, MOD, &x, &y);

    if (x < 0)
        x = x + MOD;

    return x;
}

ll count_repeats(const std::string& str)
{
    fat[1] = 1LL;
    std::unordered_map<char, unsigned int> repeats;
    for (char letter : str)
    {
        repeats[letter]++;
    }

    ll B;
    if (str.size() > tam_fat){
      for (int i = tam_fat+1; i <= str.size(); i++){
        fat[i] = (i * fat[i - 1]) % MOD;
        tam_fat++;
      }
    } 

    B = 1LL;
    for (const auto& repeat : repeats)
    {
        B = (fat[repeat.second] * B) % MOD;
    }

    B = inv5(B);
    return (fat[str.size()] * B) % MOD;
}

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    string str;
    cin >> str;
    while(str != "0"){
      cout << count_repeats(str) << endl;
      cin >> str;
    }
    return 0;
}

// https://www.beecrowd.com.br/judge/pt/problems/view/1981
// Ranking 00041º, Time 0.000, Submiss Date 31/05/2023 18:49:16 (C++17)
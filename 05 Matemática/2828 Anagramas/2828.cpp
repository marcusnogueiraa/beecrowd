#include <iostream>
#include <string>
#include <unordered_map>

#define ll long long
#define MOD 1000000007

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
    std::unordered_map<char, unsigned int> repeats;
    for (char letter : str)
    {
        repeats[letter]++;
    }

    ll fat[200100], B;
    fat[1] = 1LL;
    for (int i = 2; i <= str.size(); i++)
    {
        fat[i] = (i * fat[i - 1]) % MOD;
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
    std::string str;
    std::cin >> str;
    std::cout << count_repeats(str) << std::endl;
    return 0;
}

// https://www.beecrowd.com.br/judge/pt/problems/view/2828
// Ranking 00050º, Time 0.000, Submiss Date 31/05/2023 16:15:51 (C++17)
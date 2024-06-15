#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    int n, m;
    cin >> n >> m;

    vector<int> V, S;
    for (int k = 0; k < n * m; k++)
    {
        string s;
        cin >> s;

        if (s[1] == 'V')
        {
            V.push_back(s[0] - '0');
        }
        else
        {
            S.push_back(s[0] - '0');
        }
    }

    sort(V.rbegin(), V.rend());
    sort(S.rbegin(), S.rend());

    for (auto n : V)
    {
        cout << n << "V" << endl;
    }

    for (auto n : S)
    {
        cout << n << "D" << endl;
    }
}
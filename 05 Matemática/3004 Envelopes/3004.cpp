#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin >> t;

    while (t--)
    {
        int a, b;
        int x, y;

        cin >> a >> b >> x >> y;

        if ((a < x && b < y) || (a < y && b < x))
        {
            cout << "S" << endl;
        }
        else
        {
            cout << "N" << endl;
        }
    }
}
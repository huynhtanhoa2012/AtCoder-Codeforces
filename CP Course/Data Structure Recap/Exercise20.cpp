#include <bits/stdc++.h>

using namespace std;
const int inf = 1000000000; // 10^9
typedef long long ll;

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int a, b, c;
    cin >> a >> b >> c;

    int ac_minus = c % 2 == 1 and a < 0;
    int bc_minus = c % 2 == 1 and b < 0;

    if (ac_minus != bc_minus)
    {
        if (ac_minus)
            cout << "<";
        else
            cout << ">";
    }
    else
    {
        if (abs(a) == abs(b))
            cout << "=";
        else if (abs(a) < abs(b))
            cout << "<";
        else
            cout << ">";
    }
}
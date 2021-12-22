#include <bits/stdc++.h>  
#define mod 1000000007
 
using namespace std;
const int inf = 1000000000; // 10^9
typedef long long ll;



 
int main(){
 
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif

    int n, f;
    cin >> n >> f;
    vector<pair<ll, ll>> a;
    vector<ll> k(n), l(n);

    for (int i = 0; i < n; i++) {
        cin >> k[i] >> l[i];
        a.push_back(make_pair(min(2 * k[i], l[i]) - min(k[i], l[i]), i));
    }   
    sort(a.rbegin(), a.rend());

    long long ans = 0;
    for (int i = 0; i < f; i++) {
        int pos = a[i].second;
        ans += min(2 * k[pos], l[pos]);
    }
    for (int i = f; i < n; i++) {
        int pos = a[i].second;
        ans += min(k[pos], l[pos]);
    }
    cout << ans;
}
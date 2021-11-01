#include <bits/stdc++.h>  
 
using namespace std;
 
typedef long long ll;
 
int main(){
 
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
 
    long long n, m, a;
    cin >> n >> m >> a;
    long long ans = 0;
    ans = ceil((n+a-1)/a) * ceil((m+a-1)/a);

    cout << ans;
    return 0;
}
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
    int n, m;
    cin >> n >> m;

    ll a[5] = {0}, b[5] = {0};
    for(int i=1; i<=n; i++){
        a[i%5]++;
    }
    for(int i=1; i<=m; i++){
        b[i%5]++;
    }
    
    ll ans = a[0]*b[0] + a[1]*b[4] + a[2]*b[3] + a[3]*b[2] + a[4]*b[1];
    cout << ans;
    
    
}
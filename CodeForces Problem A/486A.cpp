#include <bits/stdc++.h>  
 
using namespace std;
 
typedef long long ll;
 
int main(){
 
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif

    ll n;
    cin >> n;
    ll ans = 0;
    if(n%2==0) ans = n/2;
    else ans = -(n+1)/2;

    cout << ans;
}
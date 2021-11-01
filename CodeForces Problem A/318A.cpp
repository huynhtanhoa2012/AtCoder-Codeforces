#include <bits/stdc++.h>  
 
using namespace std;
 
typedef long long ll;
 
int main(){
 
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
 
    ll n,k;
    cin >> n >> k;
    if (k <= (n+1)/2)
    {
        cout << 2*k-1 << endl;
    }
    else
    {
        k -= ((n+1)/2);
        cout << 2*k << endl;
    } 
    return 0;
}
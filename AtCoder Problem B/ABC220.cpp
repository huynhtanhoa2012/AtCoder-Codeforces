#include <bits/stdc++.h>  
 
using namespace std;

long long BaseToDecimal(long long  n, int base){
    long long ans = 0;
    int digit = 0;
    while(n>0){
        ans += (n%10) * pow(base, digit); 
        n /= 10;
        digit++;
    }
    return ans;
}


void solve(){
    long long a, b;
    int k;
    cin >> k >> a >> b;
    cout << BaseToDecimal(a, k) * BaseToDecimal(b, k) << endl;
}
 
int main(){
 
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
 
    solve();
    return 0;
}
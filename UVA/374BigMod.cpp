#include <bits/stdc++.h>  
#define mod 1000000007
 
using namespace std;
const int inf = 1000000000; // 10^9
typedef long long ll;

ll modularPower(int x, int n, int M){
    if(n==0)
        return 1;
    else if(n%2 == 0){
        int ans = modularPower(x, n/2, M);
        return (ans*ans) % M;
    }    
    else{
        return (x%M * modularPower(x, n-1, M)) % M;
    }                      
        
}
 
int main(){
 
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
    
    ll b, p, m;
    cin >> b >> p >> m;

    cout << modularPower(b, p, m);
    
    
    
    
}
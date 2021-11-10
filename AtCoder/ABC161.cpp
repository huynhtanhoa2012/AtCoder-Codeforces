#include <bits/stdc++.h>  
 
using namespace std;
const int inf = 1000000000; // 10^9
typedef long long ll;
 
 
int main(){
 
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
    
    ll n, k;
    cin >> n >> k;
    ll res = 1000000000000000000;
    
    while(n){
        int x = abs(n-k);
        if(n==0 or k==1){
            res = 0;
            break;
        } 
        else if(n<x){
            res = n;
            break;
        }

        else if(x<res){
            res = x;
            n = abs(n-k);
        } 
        else {
            break;
        }
    }
    cout << res << endl;
    
    
    
}
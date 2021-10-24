#include <bits/stdc++.h>  
 
using namespace std;
 
typedef long long ll;
 
ll solve(){
    ll n, x;
    cin >> n;
    vector<ll> A(n);
    for(int i=0; i<n; i++){
        cin >> A[i];
    }
    cin >> x;
    ll sum = 0;
    ll count = 0;
    for(int i=0; i<n;i++){
        sum += A[i];
        count++;
        if(sum > x){
            return count;
        }
        if(i==n-1){
            i=-1;
        }
    }
    return count;

}
 
int main(){
 
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
    cout << solve();
    return 0;
}
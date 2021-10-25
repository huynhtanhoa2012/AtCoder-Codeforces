#include <bits/stdc++.h>  
 
using namespace std;
 
typedef long long ll;
 
void solve(){
    int a0=0, a1=0, b0=0, b1=0, f0=0, f1=0;
    cin >> a0 >> a1;
    cin >> b0 >> b1;
    cin >> f0 >> f1;

    // shortest path calculated by
    int ans = 0;
    ans = abs(a0-b0) + abs(a1-b1);

    // Visiting the cell F only when A and B on the same
    // row or same col (a0==b0 || a1==b1)
    // F is visited only when it locates in the middle of
    // A and B (a0< f0 and f0 < b0) or (a1 < f1 and f1 < b1)

    if(
        (a0==b0 and a0==f0) and ((a1<f1 and f1<b1) or (a1>f1 and f1>b1)) 
        or
        (a1==b1 and a1==f1) and ((a0<f0 and f0<b0) or (a0>f0 and f0>b0))
    ){
        ans += 2;
    }
    cout << ans << endl;

}
 
int main(){
 
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
 
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
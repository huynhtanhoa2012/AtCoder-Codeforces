#include <bits/stdc++.h>  
 
using namespace std;
 
void solve(){
    long c1 = 0, c2 = 0;
    long long x;
    cin >> x;
    if(x % 3 == 0){
        c1 = x/3;
        c2 = c1;
    }
    else if( x%3 == 1){
        c1 = x/3 + 1;
        c2 = x/3;
    }
    else if(x%3 == 2){
        c1 = x/3;
        c2 = x/3 + 1;
    }

    cout << c1 << " " << c2  << endl;
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
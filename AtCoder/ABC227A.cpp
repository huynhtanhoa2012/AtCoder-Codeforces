#include <bits/stdc++.h>  
 
using namespace std;
const int inf = 1000000000; // 10^9
typedef long long ll;
 
 
int main(){
 
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
    
    int n, k, a;
    cin >> n >> k >> a;
    int ans = (a + k - 1) % n;
    if(ans == 0) ans = n;
    cout << ans << endl;
    
    
    
}
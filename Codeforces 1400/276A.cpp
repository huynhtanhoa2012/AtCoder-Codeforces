#include <bits/stdc++.h>  
 
using namespace std;
const int inf = 1000000000; // 10^9
typedef long long ll;
 
 
int main(){
 
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
    int n, k;
    cin >> n >> k;
    int res = INT_MIN;
    while(n--){
        int f, t;
        cin >> f >> t;
        if(t<=k) res = max(res, f);
        else {
            res = max(res, f- (t-k));
        }
    }
    cout << res << endl;
}
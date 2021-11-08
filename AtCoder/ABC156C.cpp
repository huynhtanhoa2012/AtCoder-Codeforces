#include <bits/stdc++.h>  
 
using namespace std;
#define rep(i, c) for(int i = 0; i < (int)c; i++)
const int inf = 1000000000;
typedef long long ll;
 
int main(){
 
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif

    int n;
    cin >> n;
    vector<int> coordinate(n);
    rep(i, n) cin >> coordinate[i];

    int L=coordinate[0], R=coordinate[0];
    rep(i, n) {
        L = min(L, coordinate[i]);
        R = max(R, coordinate[i]);
    } 

    int ans = inf;
    for(int i= L; i<=R; i++){
        int cost = 0;
        for(int j=0; j<n; j++){
            cost += (coordinate[j] - i) * (coordinate[j] - i);
        }
        ans = min(ans, cost);
    }
    cout << ans << endl;


   
    
    
    
    
}
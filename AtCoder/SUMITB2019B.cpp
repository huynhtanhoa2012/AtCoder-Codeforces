#include <bits/stdc++.h>  
 
using namespace std;
#define rep(i, c) for(int i = 0; i < (int)c; i++)
const int inf = 1000000000; // 10^9
 
typedef long long ll;
 
int main(){
 
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
    int n;
    cin >> n;

    int x = ceil(n/1.08);
    int ans = x*1.08;
    if(ans == n) cout << x << endl;
    else cout << ":(" << endl;
    
}
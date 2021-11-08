#include <bits/stdc++.h>  
 
using namespace std;
const int inf = 1000000000; // 10^9
 
typedef long long ll;
 
int main(){
 
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
    
    ll h, w;
    cin >> h >> w;
    if(h==1 or w==1) cout << 1 << endl;
    else if(h%2==1 and w%2==1) cout << ((h*w)+1)/2 << endl;
    else cout << (h*w)/2 << endl;
    
}
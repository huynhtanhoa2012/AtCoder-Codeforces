#include <bits/stdc++.h>  
#define mod 1000000007
 
using namespace std;
const int inf = 1000000000; // 10^9
typedef long long ll;
 
 
int main(){
 
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif

    int n;
    cin >> n;
    int pos[n];

    for(int i=0; i<n; i++){
        int a;
        cin >> a;
        pos[a] = i+1;
    }   
    int m;
    cin >> m;
    ll cnt1 = 0, cnt2 = 0;
    while(m--){
        int b;
        cin >> b;
        cnt1 += pos[b];
        cnt2 += n - pos[b] + 1;
    }
    cout << cnt1 <<" " << cnt2;
    
    
    
    
}
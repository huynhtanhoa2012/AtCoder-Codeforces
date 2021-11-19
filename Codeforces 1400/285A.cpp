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
    for(int i=0; i<k; i++){
        cout << n-i << " ";
    }
    for(int i=1; i<=n-k; i++){
        cout << i << " ";
    }
    
}
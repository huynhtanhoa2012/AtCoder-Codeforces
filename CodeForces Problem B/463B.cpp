#include <bits/stdc++.h>  
 
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
    int ans = 0, energy = 0;
    int x = 0;

    for(int i=0; i<n; i++){
        int y;
        cin >> y;

        energy += x - y;
        if(energy<0){
            ans += -energy;
            energy = 0;
        }
        x = y;
    }

    cout << ans; 
    
    
    
    
}
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
    
    int n, k;
    cin >> n >> k;
    int heights[n+1];
    
    for(int i=1; i<=n; i++){
        int x;
        cin >> x;
        heights[i] = x;
    }
    
    int prefix[n+1];
    prefix[0] = 0;
    for(int i=1; i<=n; i++){
        prefix[i] = prefix[i-1] + heights[i];
    }

    int minimum_height = inf;
    int res = 0;
    for(int i=k; i<=n; i++){
        int planks = prefix[i] - prefix[i-k];
        if(minimum_height > planks){
            minimum_height = planks;
            res = i;
        }
    }
    
    cout << res-k+1;
    
}
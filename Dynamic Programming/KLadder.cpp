#include <bits/stdc++.h>  
#define mod 1000000007
 
using namespace std;
const int inf = 1000000000; // 10^9
typedef long long ll;
 
int dp(int n, int k){
    if(n==0){
        return 1;
    }
    if(n<0){
        return 0;
    }
    //Recursive case
    int ans = 0;
    for(int jump=1; jump<=k; jump++){
        ans += dp(n-jump, k);
    }
    return ans; 
}

int dpTD(int n, int k, int *dp){
    if(n==0){
        return 1;
    }
    if(n<0){
        return 0;
    }
    // Check if state is already computed
    if(dp[n]!=0){
        return dp[n];
    }
    //Recursive case
    int ans = 0;
    for(int jump=1; jump<=k; jump++){
        ans += dpTD(n-jump, k, dp);
    }
    return dp[n] = ans; 
}

 
int main(){
 
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
    
    int n, k;
    cin >> n >> k;

    cout << dp(n, k);
    // Top Down approach
    int dp[1000] = {0};
    cout << dpTD(n, k, dp);
    
    
    
    
}
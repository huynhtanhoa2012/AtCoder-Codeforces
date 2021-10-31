#include <bits/stdc++.h>  
 
using namespace std;
 
typedef long long ll;
 
int main(){
 
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
 
    int n;
    cin >> n;
    int A[n], B[n];
    for(int i=0;i<n;i++){
        cin >> A[i];
        cin >> B[i]; 
    }
    // Check rated
    string ans = "maybe";
    for(int i=0;i<n-1;i++){
        for(int j=i+1; j<n; j++){
            if(A[i] < A[j]) ans = "unrated";
        }
    }
    for(int i=0;i<n;i++){
        if(B[i] != A[i]) ans = "rated";
    }
    cout << ans; 

    return 0;
}
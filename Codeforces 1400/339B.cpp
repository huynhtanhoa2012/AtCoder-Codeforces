#include <bits/stdc++.h>  
 
using namespace std;
const int inf = 1000000000; // 10^9
typedef long long ll;
 
 
int main(){
 
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
    int n, m;
    cin >> n >> m;
    vector<int> A(m+1);
    A[0] = 1;
    for(int i=1; i<m; i++){
        cin >> A[i];
    }
    int res = 0;
    if(m==1) cout << A[1] - A[0];
    else {
        for(int i=1; i<m; i++){
            if(A[i] <= A[i+1]){
                res += A[i+1] - A[i]; 
            }
            else{
                res += n - A[i] + A[i+1];
            }
        }
        cout << res;
    }
    
    
    
    
    
    
}
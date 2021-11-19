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
    int A[n];
    for(int i=0; i<n; i++){
        cin >> A[i];
    }
    sort(A, A+n);
    int sum = 0;
    for(int i=0; i<m; i++){
        if(A[i] < 0) sum -= A[i];
    }
    cout << sum << endl;
    
}
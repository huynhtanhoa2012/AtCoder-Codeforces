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
    vector<int> A;
    for(int i=0; i<m; i++){
        int x;
        cin >> x;
        A.push_back(x);
    }
    sort(A.begin(), A.end());
    int res = INT_MAX;
    for(int i=0; i<=m-n; i++){
        int sum = A[(n-1)+i] - A[i];
        res = min(sum, res);
    }

    cout << res << endl;
    
    
    
}
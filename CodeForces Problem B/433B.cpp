#include <bits/stdc++.h>  
 
using namespace std;
const int inf = 1000000000; // 10^9
typedef long long ll;


ll prefixSum(vector<ll> A, int n, int l, int r){
    vector<ll> prefix(n);
    prefix[0] = A[0];
    for(int i=1; i<n; i++){
        prefix[i] = prefix[i-1] + A[i];
    }
    if(l>1) return prefix[r-1] - prefix[l-2];
    else return prefix[r-1];
}

int main(){
 
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
    
    int n;
    cin >> n;
    // unsorted list
    vector<ll> A(n);
    // sorted List
    vector<ll> B(n);
    for(int i=0; i<n; i++){
        cin >> A[i];
        B[i] = A[i];
    }
    
    sort(B.begin(), B.end()); // O(nlog n);

    int m, type, l, r;
    cin >> m;
    for(int i=0; i<m; i++){
        cin >> type >> l >> r;
        if(type==1){
            cout << prefixSum(A, n, l, r) << endl;
        }
        else{
            cout << prefixSum(B, n, l, r) << endl;
        }
    }
}
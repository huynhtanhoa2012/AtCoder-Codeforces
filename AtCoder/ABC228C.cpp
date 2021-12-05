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
    vector<int> A, B;

    for(int i=0; i<n; i++){
        int p1, p2, p3;
        cin >> p1 >> p2 >> p3;
        int total = p1 + p2 + p3;
        A.push_back(total);
    }
    
    B = A;
    sort(B.begin(), B.end(), greater<int>());

    for(int i=0; i<n; i++){
        if((A[i]+300) >= B[k-1]) cout << "Yes" << endl;
        else cout << "No" << endl;
    }

    
    
    
    
}
#include <bits/stdc++.h>  
 
using namespace std;
const int inf = 1000000000; // 10^9
 
typedef long long ll;
 
int main(){
 
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif

    int n, m, c;
    cin >> n >> m >> c;
    vector<int> A[n], B(m);
    
    for(int i=0; i<m; i++){
        cin >> B[i];
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            int x;
            cin >> x;
            A[i].push_back(x);
        }
    }

    // Calculate
    int count = 0;
    for(int i=0; i<n; i++){
        int total = 0;
        for(int j=0; j<m; j++){
            total += A[i][j] * B[j];
        }
        total += c;
        if(total > 0) count++;
    }
    
    cout << count << endl;


}
#include <bits/stdc++.h>  
 
using namespace std;
const int inf = 1000000000; // 10^9
typedef long long ll;
 
 
int main(){
 
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
    
    int k, n;
    cin >> k >> n;
    vector<int> distances(n);
    for(int i=0; i<n; i++){
        cin >> distances[i];
    }

    int res = 0;
    for(int i=0; i<n-1; i++){
        cout << distances[i] << endl;
        res += distances[i+1] - distances[i];
    }

    cout << res << endl;
    
    
    
    
    
}
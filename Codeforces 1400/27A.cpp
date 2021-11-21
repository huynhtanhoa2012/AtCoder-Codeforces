#include <bits/stdc++.h>  
 
using namespace std;
const int inf = 1000000000; // 10^9
typedef long long ll;
 
 
int main(){
 
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
    
    int n;
    cin >> n;
    bool indices[3002] = {false};
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        indices[x] = true;
    }
    for(int i=1; i<=3001; i++){
        if(indices[i]==false){
            cout << i << endl;
            break;
        }
    }
    
    
    
    
}
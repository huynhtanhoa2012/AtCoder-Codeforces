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
    int x = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n/2; j++){
            cout << x+1 << " " << n*n - x << " ";
            x++;
        }
        cout << endl;
    }
}
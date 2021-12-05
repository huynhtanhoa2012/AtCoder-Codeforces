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
    int sumA = 0, sumB = 0;
    bool checkAlex = false;
    while(n--){
        int a, b;
        cin >> a >> b;
        if(a<b){
            checkAlex = true;
            break;
        }
    }
    if(checkAlex) cout << "Happy Alex";
    else cout << "Poor Alex";
    
    
    
    
}
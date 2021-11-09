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
    int max = 0;
    int res = 1;
    for(int i=1; i<=n; i++){

        int count = 0;
        int x = i;
        while(x%2 == 0){
            count++;
            x /= 2;
        }

        if(count > max){
            max = count;
            res = i;
        }
    }

    cout << res << endl;
    
    
    
}
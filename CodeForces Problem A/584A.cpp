#include <bits/stdc++.h>  
 
using namespace std;
 
typedef long long ll;
 
int main(){
 
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
 
    int n, t;
    cin >> n >> t;

    if(n==1 and t==10) cout << -1 << endl;
    else{
        if(t==10) t=1;
        cout << t;
        while(n>1){
            cout << "0";
            n--;
        }
    }
     
    return 0;
}
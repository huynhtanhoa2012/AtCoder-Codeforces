#include <bits/stdc++.h>  
 
using namespace std;
 
typedef long long ll;
 
int main(){
 
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
 
    int n , r;
    cin >> n >> r;
    for(int i=1; i <=10; i++){
        int x = n * i;
        if(x%10==0 || x%10 == r){
            cout << i << endl;
            break;
        }
    }
    return 0;
}
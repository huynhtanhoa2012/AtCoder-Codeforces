#include <bits/stdc++.h>  
 
using namespace std;
 

int main(){
 
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
 
    long long a, b, c;
    cin >> a >> b >> c;
    long long y = b/c * c;
    if(a <= y){
        cout << y << endl;
    }
    else{
        cout << -1 << endl;
    }

    return 0;
}
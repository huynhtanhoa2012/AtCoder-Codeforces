#include <bits/stdc++.h>  
 
using namespace std;
 
typedef long long ll;
 
int main(){
 
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
 
    ll n;
    cin >> n;
    if(n==0) cout << "1";
    else if(n%4==0) cout << "6";
    else if(n%4==1) cout << "8";
    else if(n%4==2) cout << "4";
    else cout << "2";



    return 0;
}
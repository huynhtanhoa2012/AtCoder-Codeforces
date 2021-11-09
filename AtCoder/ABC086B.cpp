#include <bits/stdc++.h>  
 
using namespace std;
const int inf = 1000000000; // 10^9
typedef long long ll;
 
 
int main(){
 
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
    
    string a, b;
    cin >> a >> b;
    int c =  stoi(a+b);
    int x = sqrt(c);
    if(x*x == c) cout << "Yes";
    else cout << "No";
    
}
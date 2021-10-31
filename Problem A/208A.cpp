#include <bits/stdc++.h>  
 
using namespace std;
 
typedef long long ll;
 
int main(){
 
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
 
    string s;
    cin >> s;
    regex p("WUB");
    cout<< regex_replace(s,p," ");
    return 0;
}
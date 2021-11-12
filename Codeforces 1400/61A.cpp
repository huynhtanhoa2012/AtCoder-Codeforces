#include <bits/stdc++.h>  
 
using namespace std;
const int inf = 1000000000; // 10^9
typedef long long ll;
 
 
int main(){
 
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
    string s1, s2;
    cin >> s1 >> s2;
    int n = s1.size();
    for(int i=0; i<n; i++){
        int c = (s1[i] - '0') ^ (s2[i] - '0');
        cout << c;
    }
}
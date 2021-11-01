#include <bits/stdc++.h>  
 
using namespace std;
 
typedef long long ll;
 
int main(){
 
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
 
    int n;
    cin >> n;
    int count = 0;
    while(n--) {
        int a, b, c;
        cin >> a >> b >> c;
        if(a+b+c >= 2) count++;
        else continue;
    }
    cout << count << endl;
    return 0;
}
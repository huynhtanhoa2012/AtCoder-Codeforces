#include <bits/stdc++.h>  
 
using namespace std;
 
typedef long long ll;
 
 
int main(){
 
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
 
    int n, last=0;
    cin >> n;
    int count = 0;
    for(int i=0; i<n; i++){
        int a;
        cin >> a;
        if(a != last) count++;
        last = a;
    }

    cout << count << endl;
    return 0;
}
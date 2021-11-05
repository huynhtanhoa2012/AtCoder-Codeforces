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
    if(n%2==0){
        cout << n/2 << endl;
        for(int i=0; i<(n/2) - 1; i++){
            cout << 2 << " ";
        }
        cout << 2 << endl;
    }
    else {
        cout << n/2 << endl;
        for(int i=0; i<(n-3)/2; i++){
            cout << 2 << " ";
        }
        cout << 3 << endl;
    }
}
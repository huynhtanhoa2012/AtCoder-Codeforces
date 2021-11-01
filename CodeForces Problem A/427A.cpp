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
    int polices = 0;
    int count = 0;
    while(n--) {
        int x;
        cin >> x;
        polices += x;
        if(polices < 0){
            count++;
            polices = 0;
        }
    }
    cout << count << endl;
    return 0;
}
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
    int home[n], away[n];
    for(int i=0; i<n; i++){
        cin >> home[i] >> away[i];
    }
    int count = 0;
    for(int i=0; i<n;i++){
        for(int j=0; j<n;j++){
            if(home[i] == away[j]){
                count++;
            }
        }
    }
    cout << count << endl;

    return 0;
}
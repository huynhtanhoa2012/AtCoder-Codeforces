#include <bits/stdc++.h>  
 
using namespace std;
 
typedef long long ll;
 
bool check(int T){
    //cout << T << endl;
    bool digits[10] = {0};
    do{
        digits[T%10]++;
        cout << T%10 << endl;
        T/=10;
    } while(T);
    cout << "-----------" << endl;
    cout << !digits[0] << endl;
    cout << !digits[7] << endl;
    return true;
}


int main(){

#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
 
    int n, k, T;
    cin >> n >> k;
    int ans = 0;
    while(n--) {
        cin >> T;
        if(check(T)) ans++;
    }
    
    return 0;
}
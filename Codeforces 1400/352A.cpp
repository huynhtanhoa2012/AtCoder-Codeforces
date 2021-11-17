#include <bits/stdc++.h>  
 
using namespace std;
const int inf = 1000000000; // 10^9
typedef long long ll;

 
int main(){
 
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
    int n;
    cin >> n;
    int count_zeros = 0, count_fives = 0;
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        if(x == 0) count_zeros++;
        else count_fives++;
    }
    if(count_zeros==0) cout << -1;
    else if(count_fives<9) cout << 0;
    else{
        count_fives = count_fives - (count_fives%9);
        for(int i=0; i<count_fives;i++){
            cout << 5;
        }
        for(int i=0;i<count_zeros;i++){
            cout << 0;
        }
    }
    
    
    
    
    
    
}
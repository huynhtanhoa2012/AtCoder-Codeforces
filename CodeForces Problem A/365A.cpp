#include <bits/stdc++.h>  
 
using namespace std;
const int inf = 1000000000; // 10^9
typedef long long ll;

 
int main(){
 
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
    
    int n, k;
    cin >> n >> k;
    int cnt = 0;
    while(n--){
        int number;
        cin >> number;

        bool flag[10] = {false};
        while(number){
            int digit = number%10;
            number= number/10;
            flag[digit] = 1;
        }
        
        for(int i=0; i<=k; i++){
            if(flag[i]==false){
                goto x;
            }
        }
        cnt++;
        x:;
    }
    cout << cnt;
    
    
    
    
}
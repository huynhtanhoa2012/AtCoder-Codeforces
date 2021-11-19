#include <bits/stdc++.h>  
 
using namespace std;
const int inf = 1000000000; // 10^9
typedef long long ll;
 
 
int main(){
 
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
    int n, first;
    cin >> n >> first;
    int maxValue = first, minValue = first;
    int count = 0;
    for(int i=0; i<n-1; i++){
        int x;
        cin >> x;
        if(x < minValue){
            minValue = x;
            count++;
        } 
        else if(x > maxValue){
            maxValue = x;
            count++;
        } 
    }
    cout << count << endl;


    
    
    
    
    
}
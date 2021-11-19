#include <bits/stdc++.h>  
 
using namespace std;
const int inf = 1000000000; // 10^9
typedef long long ll;

int calculatePercent(int x, int n){

    return (x*100)/n;
}
 
int main(){
 
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
    int n, x, y;
    cin >> n >> x >> y;

    int clonePuppets = 0;
    int percentX = calculatePercent(x, n);
    if(percentX >= y) cout << 0;
    else{
        while(percentX < y){
            clonePuppets++;
            percentX = calculatePercent(x+clonePuppets, n);
        }
        cout << clonePuppets;
    }


    
    
    
    
    
}
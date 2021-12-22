#include <bits/stdc++.h>  
#define mod 1000000007
 
using namespace std;
const int inf = 1000000000; // 10^9
typedef long long ll;
 
bool checkTriangle(int a, int b, int c){
    if(a<b+c and b<a+c and c<a+b) return true;
    else return false;
}

int main(){
 
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
    
    int n;
    cin >> n;
    int segments[n];

    for(int i=0; i<n; i++){
        cin >> segments[i];
    }

    sort(segments, segments+n);
    
    for (int i=1; i<n-1; i++) {
        if((segments[i-1] + segments[i]) > segments[i+1]){
            cout << "yes";
            return 0;
        }
    }
    cout << "no";
    
    

    
    
    
}
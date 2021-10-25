#include <bits/stdc++.h>  
 
using namespace std;
 
typedef long long ll;
 
void solve(){
    
}
 
int main(){
 
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
 
    int x;
    cin >> x;
    if(x<40){
        cout << 40 - x << endl;
    }
    else if(x<70){
        cout <<  70 -x << endl;
    }
    else if(x<90){
        cout << 90-x << endl; 
    }
    else{
        cout << "expert" << endl;
    }

    return 0;
}
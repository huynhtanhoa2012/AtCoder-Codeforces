#include <bits/stdc++.h>  
 
using namespace std;
 
typedef long long ll;
 
int main(){
 
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
 
    int y, w;
    cin >> y >> w;
    int a = max(y, w);
    if(a==1) cout <<"1/1"<<endl;
    else if(a==2) cout <<"5/6"<<endl;
    else if(a==3) cout <<"2/3"<<endl;
    else if(a==4) cout <<"1/2"<<endl;
    else if(a==5) cout <<"1/3"<<endl;
    else if(a==6) cout <<"1/6"<<endl;

    return 0;
}
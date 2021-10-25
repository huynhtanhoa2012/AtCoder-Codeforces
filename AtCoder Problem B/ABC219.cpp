#include <bits/stdc++.h>  
 
using namespace std;
 
typedef long long ll;

 
int main(){
 
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
 
    string s1, s2, s3, T;
    cin >> s1 >> s2 >> s3 >> T;
    string result = "";

    // loop through T
    for(char x: T){
        if(x=='1'){
            result += s1;
        }
        else if(x=='2'){
            result += s2;
        }
        else{
            result += s3;
        }   
    }

    cout << result;
    return 0;
}
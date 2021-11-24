#include <bits/stdc++.h>  
 
using namespace std;
const int inf = 1000000000; // 10^9
typedef long long ll;
 
 
int main(){
 
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
    
    string s;
    int count[26] = {0};

    cin >> s;
    int n = s.size();

    for(int i=0; i<n; i++){
        int index = s.at(i) - 'a';
        count[index]++;
    }

    int res = -1;
    for(int i=0; i<n; i++){
        int index = s.at(i) - 'a';
        if(count[index]==1){
            res = i;
            break;
        }
    }
    cout << res;
}
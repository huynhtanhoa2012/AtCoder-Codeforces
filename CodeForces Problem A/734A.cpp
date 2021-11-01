#include <bits/stdc++.h>  
 
using namespace std;
 
typedef long long ll;
 

 
int main(){
 
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
 
    
    int n;
    string s;
    cin >> n;
    cin >> s;
    int countA = 0, countD = 0;

    for(int i=0; i<n; i++){
        if(s[i] == 'A') countA++;
        if(s[i] == 'D') countD++;
    }
    if(countA > countD) cout << "Anton" << endl;
    else if(countA < countD) cout << "Danik" << endl;
    else cout << "Friendship" << endl;



    return 0;
}
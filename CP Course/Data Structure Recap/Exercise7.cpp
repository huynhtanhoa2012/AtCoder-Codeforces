#include <bits/stdc++.h>  
 
using namespace std;
const int inf = 1000000000; // 10^9
typedef long long ll;


string getHint(string secret, string guess) {
    int mp1[10] = {0};
    int mp2[10] = {0};
    int bulls = 0, cows = 0;

    for(int i=0; i<secret.size(); i++){
        if(secret[i]==guess[i]) bulls++;
        else{
            mp1[secret[i]-'0']++;
            mp2[guess[i]-'0']++;  
        }
    }

    for(int i=0; i<10; i++){
        if(mp1[i] != 0; mp2[i] != 0){
            cows += min(mp1[i], mp2[i]);
        }
    }

    return to_string(bulls) + "A" +to_string(cows) + "B";
}
 
int main(){
 
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
    
    string secret = "1807";
    string guess = "7810";

    cout << getHint(secret, guess);
    
    

}
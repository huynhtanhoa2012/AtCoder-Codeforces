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
 
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;

        // Find index of a 
        int L = s.find('a');
        
        // Check if a is exist in string
        if(L == string::npos){
            cout << "NO" << endl;
            continue;
        }

        // Assign L = R
        int R = L;
        bool yes = true;
        // Loop through n times
        for(int i = 1; i< s.size(); i++){
            // Find next character.  Eg: b, c, d
            int pos = s.find(char('a' + i));
            // Check whether the letter write to left or rigth
            if(pos == string::npos || (pos != L-1 && pos != R+1)){
                yes = false;
                break;
            }
            else{
                // Move left and right pointer
                L = min(L, pos);
                R = max(R, pos);
            }
            
        }

        cout << (yes ?  "YES" : "NO") << endl;


    }
    return 0;
}
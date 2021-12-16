#include <bits/stdc++.h>
using namespace std;

 
int main(){
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    string s1, s2;
    while(cin>>s1){
        cin >> s2;

        int result[600] = {0};
        // Reverse 2 string
        reverse(s1.begin(), s1.end());
        reverse(s2.begin(), s2.end());

        int carry = 0;
        for(int i=0; i<s2.length(); i++){
            for(int j=0; j<s1.length(); j++){
                int ans = (s2[i]-'0') * (s1[j]-'0') + carry + result[i+j];
                result[i+j] = ans%10;
                carry = ans/10;
            }
        }

        
        if(carry){
            int size = s1.length() + s2.length() - 1;
            result[size] = carry;
            for(int i=size; i>=0; i--){
                cout << result[i];
            }
        }
        else {
            for(int i=s2.length()-1; i>=0; i--){
                cout << result[i];
            }
        }
        
        cout<< endl;
    }
    
    return 0;
}
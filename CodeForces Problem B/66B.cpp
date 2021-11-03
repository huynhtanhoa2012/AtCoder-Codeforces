#include <bits/stdc++.h>  
 
using namespace std;
 
typedef long long ll;
 
int main(){
 
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
 
    int n;
    cin >> n;
    vector<int> wateredSections(n, 1);
    vector<int> sections;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        sections.push_back(x);
    }

    for(int i=0;i<n;i++){
        int l = i-1;
        int r = i+1;
        while(l >= 0){
            if(sections[l+1] >= sections[l]){
                wateredSections[i]++;
                l--;
            }
            else break;
        }
        while(r <= n-1){
            if(sections[r-1] >= sections[r]){
                wateredSections[i]++;
                r++;
            }
            else break;
            
        }
    }

    int ans = *max_element(wateredSections.begin(), wateredSections.end());
    cout << ans << endl;
}
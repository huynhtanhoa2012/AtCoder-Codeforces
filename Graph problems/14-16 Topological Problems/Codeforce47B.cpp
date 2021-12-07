#include <bits/stdc++.h>  
 
using namespace std;
const int inf = 1000000000; // 10^9
typedef long long ll;

vector<int> nodes[3];
vector<int> res;
int in_degree[3];

bool solve(){
    queue<int> q;
    for(int i=0; i<=2; i++){
        if(in_degree[i]==0){
            q.push(i);
        }
    }

    while(!q.empty()){
        int curr = q.front();
        q.pop();
        res.push_back(curr);

        for(auto child: nodes[curr]){
            in_degree[child]--;
            if(in_degree[child] == 0){
                q.push(child);
            }
        }
    }

    if(res.size() < 3) return false;
    else return true;

}

int main(){
 
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
    string string1, string2, string3;
    cin >> string1 >> string2 >> string3;
    
    char x = string1[1];
    char y = string2[1];
    char z = string3[1];

    if(x=='>'){
        nodes[string1[2]-'A'].push_back(string1[0]-'A');
        in_degree[string1[0]-'A']++;
    } 
    else{
        nodes[string1[0]-'A'].push_back(string1[2]-'A');
        in_degree[string1[2]-'A']++;
    } 

    if(y=='>'){
        nodes[string2[2]-'A'].push_back(string2[0]-'A');
        in_degree[string2[0]-'A']++;
    } 
    else{
        nodes[string2[0]-'A'].push_back(string2[2]-'A');
        in_degree[string2[2]-'A']++;
    } 

    if(z=='>'){
        nodes[string3[2]-'A'].push_back(string3[0]-'A');
        in_degree[string3[0]-'A']++;
    } 
    else{
        nodes[string3[0]-'A'].push_back(string3[2]-'A');
        in_degree[string3[2]-'A']++;
    } 

    if(!solve()){
        cout << "Impossible";
    }
    else{
        for(auto x: res){
            cout << char(x+'A');
        }
    }
    
    
    
    
}
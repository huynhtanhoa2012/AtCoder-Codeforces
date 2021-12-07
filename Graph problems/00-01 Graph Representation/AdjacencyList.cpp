#include <bits/stdc++.h>  
using namespace std;

// Data sharing easy between different functions of the class
class Graph{
    int V;
    list<int> *l;
public:
    Graph(int v){
        V = v;
        l = new list<int>[V];
    }

    void addEdge(int i, int j, bool undir=true){
        l[i].push_back(j);
        if(undir){
            l[j].push_back(i);
        }
    }

    void bfs(int source, int dest=-1){
        queue<int> q;
        bool *visited = new bool[V]{0};

        // shortest path
        int *distance = new int[V]{0};
        int *parent = new int[V];
        for(int i=0; i<V; i++){
            parent[i] = -1;
        }

        q.push(source);
        visited[source] = true;

        // shortest path
        parent[source] = source;
        distance[source] = 0;

        while(!q.empty()){
            // Do some work for every node
            int f = q.front() ;
            cout << f << endl;
            q.pop();

            // Push the neighbors of current node inside 
            // the queue if they are not already visited
            for(auto nbr : l[f]){
                if(!visited[nbr]){
                    q.push(nbr);
                    
                    // shortest path
                    parent[nbr] = f;
                    distance[nbr] = distance[f] + 1;
                    visited[nbr] = true;
                    
                }
            }
        }

        // print the shortest distance
        for(int i=0; i<V; i++){
            cout<< "Shortest path to " << i <<" is "<< distance[i] << endl;
        }

        // print the path from a source to any destination
        if(dest!=-1){
            int temp = dest;
            while(temp != source){
                cout << temp <<" -- ";
                temp = parent[temp];
            }
            cout << source << endl;
        }

    }

    void dfsHelper(int node, bool *visited){
        visited[node] = true;
        cout << node<< ",";
        // make a dfs call on all its unvisited neighbours
        for(int nbr: l[node]){
            if(!visited[nbr]){
                dfsHelper(nbr, visited);
            }
        }
        return;
    }

    void dfs(int source){
        bool *visited = new bool[V];
        dfsHelper(source, visited);
    }

    void printAdjlist(){
        for(int i=0; i<V; i++){
            cout << i << "-->";
            for(auto node: l[i]){
                cout << node << ",";
            }
            cout << endl;
        }
    }


};

int main(){

#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif

    Graph g(7);
    g.addEdge(0,1);
    g.addEdge(1,2);
    g.addEdge(2,3);
    g.addEdge(3,5);
    g.addEdge(5,6);
    g.addEdge(4,5);
    g.addEdge(0,4);
    g.addEdge(3,4);

    g.bfs(1,6);

    
}
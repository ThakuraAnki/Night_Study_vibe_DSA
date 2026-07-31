#include<bits/stdc++.h>
#define ll long long
using namespace std;

template <typename T>
class Graph{
    public:
    unordered_map<T,list<T>>adj;
    void addEdge(T u,T v, bool bidir=true){
        adj[u].push_back(v);
        if(bidir) adj[v].push_back(u);
    }
    void print(){
        for(auto it:adj){
            cout<<it.first<<" : ";
            for(auto neigh:it.second){
                cout<<neigh<<" ";
            }
            cout<<endl;
        }
    }
    void bfs(T src){
        unordered_map<T,bool>visited;
        queue<T>q;
        q.push(src);
        visited[src]=true;
        while(!q.empty()){
            T x=q.front();
            q.pop();

            cout<<x<<" ";
            for(T e:adj[x]){
                if(!visited[e]){
                    q.push(e);
                    visited[e]=true;
                }
            }
        }

    }
};



int main(){
    	Graph<string> g;
	g.addEdge("A","B");
	g.addEdge("A","D");
	g.addEdge("B","C");
	g.addEdge("D","C");
    g.print();

// Breadth First Search (BFS) is a graph traversal algorithm
//  that starts from a source node and explores the graph level 
//  by level. First, it visits all nodes directly adjacent to the source.


}

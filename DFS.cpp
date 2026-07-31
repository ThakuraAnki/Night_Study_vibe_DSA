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
    /*
    Depth-First Search (DFS) is a graph 
    traversal algorithm that explores as
     far as possible along each branch before 
     backtracking.  Starting from a root or 
     source node, it prioritizes depth over
      breadth, meaning it visits a neighbor,
       then immediately visits that neighbor's 
    unvisited neighbors,continuing until it reaches a dead end. 
    */

   void DfsHelper(T src,unordered_map<T,bool>&visited){
    cout<<src<<" ";
    visited[src]=true;
    for(auto neighbours:adj[src]){
        if(!visited[neighbours]){
            DfsHelper(neighbours,visited);
        }
    }
   }
   void dfs(T src){
    unordered_map<T,bool>visited;
    DfsHelper(src,visited);
   }
   int countComponents(){
    int count=0;
    unordered_map<T,bool>visited;
    for(auto p:adj){
        if(!visited[p.first]){
            count++;
            DfsHelper(p.first,visited);
        }
    }
    cout<<endl;
    return count;
   }

};
int main(){
    Graph<string> g;
	g.addEdge("A","B");
	g.addEdge("A","C");
	g.addEdge("B","D");
	g.addEdge("D","C");
	g.addEdge("D","E");
	g.addEdge("E","F");
	g.addEdge("E","G");
	
	g.addEdge("T","X");
	
	// g.SSSP("A");

	cout << g.countComponents() << endl;


}
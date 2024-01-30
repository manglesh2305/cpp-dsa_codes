//Directed and Undirected Graph
//Degree and Weight, Path
//Cyclic and Acyclic  Graph
//Adjacency Matrix and Adjacency list
#include<bits/stdc++.h>
using namespace std;
template <typename T>
class graph{
    public:
    unordered_map<T,list<T>> adj;
    
    void addEdge(T u, T v, bool directed){
        adj[u].push_back(v);
        if(directed==0) adj[v].push_back(u);
    }

     vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<int> ans;
        vector<bool> visited(V,0);
        queue<int> q;
        visited[0]=1;
        q.push(0);
        while(!q.empty()){
            int node=q.front();
            q.pop();
            ans.push_back(node);
            for(auto it:adj[node]){
                if(!visited[it]){
                    visited[it]=1;
                    q.push(it);
                }
            }
        }
        return ans;
    }

    void DFS(vector<int> adj[],int i,vector<bool> &visited,vector<int> &ans){
        visited[i]=1;
        ans.push_back(i);
        for(auto j:adj[i]){
            if(!visited[j]){
               // visited[j]=1;
                DFS(adj,j,visited,ans);
            }
        }
    }
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<int> ans;
        vector<bool> visited(V,0);
        DFS(adj,0,visited,ans);
        return ans;
    }

    
    void printAdj(){
        for(auto i:adj){
            cout<<i.first<<"->";
            for(auto j:i.second){
                cout<<j<<",";
            }
            cout<<endl;
        }
    }
};

int main(){
    /*int n;
    cout<<"Enter number of nodes";
    cin>>n;*/
    int m;
    cout<<"Enter number of edges";
    cin>>m;
    graph<int> g,G;    //<int> bcz we r using template
    for(int i=0;i<m;i++){
        int u, v;
        cin>>u >> v;
        g.addEdge(u,v,0);
    }
   /* for(int i=0;i<m;i++){
        int u, v;
        cin>>u >> v;
        G.addEdge(u,v,1);
    }
    */
    g.printAdj();
    cout<<endl;
   // G.printAdj();
    return 0;
}
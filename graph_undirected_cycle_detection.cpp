#include<bits/stdc++.h>
using namespace std;

//Depth First Search

  bool dfs(vector<int> adj[],vector<bool> &visited, int s, int parent){
        visited[s]=1;
        for(auto &u:adj[s]){
            if(visited[u]==false){
                 if(dfs(adj,visited,u,s)){
                    return true;
                }
            }
            else if(u!=parent){
                return true;
            }
        }
        return false;
    }

//Breadth First Search

    bool bfs(vector<int> adj[],vector<bool> &visited, int s){
        map<int,int> parent;
        queue<int> q;
        q.push(s);
        visited[s]=1;
        parent[s]=-1;
        while(!q.empty()){
            int curr=q.front();
            q.pop();
            for(auto &i:adj[curr]){
                if(visited[i]==0){
                    parent[i]=curr;
                    q.push(i);
                    visited[i]=1;
                }
                else if(i!=parent[curr]){
                    return true;
                }
            }
        }
        return false;
    }
    bool isCycle(int V, vector<int> adj[]) {
        // Code here
        vector<bool> visited(V,0);
        for(int i=0;i<V;i++){
            if(visited[i]==0){
                /*if(dfs(adj,visited,i,-1)){
                    return true;
                }*/
                if(bfs(adj,visited,i)){
                    return true;
                }
            }
        }
        return false;
    }

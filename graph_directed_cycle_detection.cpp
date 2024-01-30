#include<bits/stdc++.h>
using namespace std;
//Depth First Seacrh

class Solution {
public:
bool dfs(vector<int> adj[],vector<bool> &visited, vector<bool> &rec, int s){
    visited[s]=true;
    rec[s]=true;
    for(auto &i:adj[s]){
        if(visited[i]==0 && dfs(adj,visited,rec,i)){
            return true;
        }
        else if(rec[i]==1){
            return true;
        }
    }
    rec[s]=0;
    return false;
}
    bool canFinish(int V, vector<vector<int>>& pre) {
        //Creating adjacency matrix
        vector<int> adj[V];
        for(int i=0;i<pre.size();i++){
            int n1=pre[i][1];
            int n2=pre[i][0];
            adj[n2].push_back(n1);
        }
        //Initialising visited and recursion stack vector
        vector<bool> visited(V,0);
        vector<bool> rec(V,0);
        for(int i=0;i<V;i++){
            if(visited[i]==0){
                if(dfs(adj,visited,rec,i)){
                    return true; //cycle detected
                }
            }
        }
        return false; //cycle not detected
    }
};

//Breadth first search using Kahn's algo
bool hasCycle(vector<int> adj[], int V){
    vector<int> indegree(V,0);
    for(int i=0;i<V;i++){
        for(auto &j:adj[i]){
            indegree[j]++;
        }
    }
    queue<int> q;
    for(int i=0;i<V;i++){
        if(indegree[i]==0){
            q.push(i);
        }
    }
    int count=0;
    while(!q.empty()){
        int num=q.front();
        count++;
        q.pop();
        for(auto &i:adj[num]){
            indegree[i]--;
            if(indegree[i]==0){
                q.push(i);
            }
        }
    }
    return (count!=V); // if count!=V it means it contains cycle;
}

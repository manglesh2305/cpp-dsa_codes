// Topological Sorting bfs(Kahn's Algo)

#include <bits/stdc++.h>
using namespace std;
vector<int> topoSort(int V, vector<int> adj[])

{

    // using kahn's algorithm

    // creating indegree vector

    vector<int> indegree(V);

    for (int i = 0; i < V; i++)

    {

        for (auto j : adj[i])

        {

            indegree[j]++;
        }
    }

    // push 0 indegree ones in queue

    queue<int> q;

    for (int i = 0; i < V; i++)

    {

        if (indegree[i] == 0)

        {

            q.push(i);
        }
    }

    // do bfs

    vector<int> ans;

    while (!q.empty())

    {

        int front = q.front();

        q.pop();

        // store ans

        ans.push_back(front);

        // checkk for neighbours and update indegree

        for (auto nei : adj[front])

        {
            indegree[nei]--;
            if (indegree[nei] == 0)
            {
                q.push(nei);
            }
        }
    }
    return ans;
}

//Topological sorting dfs


class Solution
{
	public:
	//Function to return list containing vertices in Topological order. 
	void dfs(int s,stack<int> &st, vector<bool> &visited,vector<int> adj[]){
	    visited[s]=1;
	    for(auto &i: adj[s]){
	        if(visited[i]==0){
	            dfs(i,st,visited,adj);
	        }
	    }
	    st.push(s);
	}
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    // code here
	    vector<bool> visited(V,0);
	    stack<int> st;
	    vector<int> ans;
	    for(int i=0;i<V;i++){
	        if(visited[i]==0){
	            dfs(i,st,visited,adj);
	        }
	    }
	    while(!st.empty()){
	        ans.push_back(st.top());
	        st.pop();
	    }
	    return ans;
	}
};

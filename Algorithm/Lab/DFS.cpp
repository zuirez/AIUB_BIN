/*
TC: O(n) + O(2*E)
SC: O(n) + O(n) + O(n)
*/

#include <bits/stdc++.h>
using namespace std;

// DFS function
void dfs(int node, vector<int> adj[], vector<int> &visited, vector<int> &result) 
{
    visited[node] = 1;            // mark node as visited
    result.push_back(node);       // add node to DFS result

    for(int neighbor : adj[node]) 
    {
        if(!visited[neighbor])    // visit all unvisited neighbors
        { 
            dfs(neighbor, adj, visited, result);
        }
    }
}

// DFS traversal function
vector<int> dfsOfGraph(int n, vector<int> adj[], int start) 
{
    vector<int> visited(n+1, 0);  // visited array, 1-indexed
    vector<int> result;           // store DFS order
    dfs(start, adj, visited, result);
    return result;
}

int main() {
    int n = 8;                   // number of nodes
    vector<int> adj[n+1];        // adjacency list, 1-indexed

    // edges (undirected graph)
    vector<pair<int,int>> edges = {
        {1,2},{1,3},{2,5},{2,6},{3,4},{3,7},{4,8},{7,8}
    };

    for(auto edge : edges) 
    {
        int u = edge.first;
        int v = edge.second;
        adj[u].push_back(v);     // add edge u->v
        adj[v].push_back(u);     // add edge v->u (undirected)
    }

    int start = 1;               // starting node
    // cout << "Enter starting node: ";
    // cin >> start;

    vector<int> dfsTraversal = dfsOfGraph(n, adj, start);

    cout << "DFS Traversal: ";
    for(int node : dfsTraversal) 
    {
        cout << node << " ";
    }
    cout << endl;

    return 0;
}

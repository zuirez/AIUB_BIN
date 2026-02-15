/*
TC: O(n) + O(2*E)
SC: O(3n)
*/

#include <bits/stdc++.h>
using namespace std;

// BFS function
vector<int> bfsOfGraph(int n, vector<int> adj[], int start) 
{
    vector<int> bfs;       
    vector<int> visited(n+1, 0);   // visited array, 1-indexed
    queue<int> q;                  // queue for BFS

    q.push(start);       // start from given node
    visited[start] = 1;  // mark starting node as visited

    while(!q.empty()) 
    {
        int node = q.front();  // get front node
        q.pop();
        bfs.push_back(node);   // add node to BFS result

        // visit all unvisited neighbors
        for(int neighbor : adj[node]) 
        {
            if(!visited[neighbor]) 
            {
                q.push(neighbor);      
                visited[neighbor] = 1; 
            }
        }
    }

    return bfs;
}

int main() 
{
    int n = 8;                  // number of nodes
    vector<int> adj[n+1];       // 1-indexed adjacency list

    // edges (undirected graph)
    vector<pair<int,int>> edges = {
        {1,2},{1,6},{2,3},{2,4},{4,5},{6,7},{6,8},{5,7}
    };

    // build the adjacency list
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

    vector<int> bfs = bfsOfGraph(n, adj, start);

    cout << "BFS Traversal: ";
    for(int node : bfs) 
    {
        cout << node << " ";
    }
    cout << endl;

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

void primMST(int n, vector<vector<int>> &edges) 
{
    // Build adjacency list: node -> {neighbor, weight}
    vector<pair<int,int>> adj[n+1];
    for(auto edge : edges)
    {
        int u = edge[0], v = edge[1], w = edge[2];
        adj[u].push_back({v,w});
        adj[v].push_back({u,w}); // undirected
    }

    vector<int> visited(n+1, 0);
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
    pq.push({0, 1}); // start from node 1
    int mstCost = 0;

    while(!pq.empty())
    {
        auto [w, node] = pq.top();
        pq.pop();

        if(visited[node]) continue;
        visited[node] = 1;
        mstCost += w;

        // Print the edge that brought us here
        for(auto edge : edges)
        {
            int u = edge[0], v = edge[1], w = edge[2];
            if((u == node && visited[v]) || (v == node && visited[u]))
            {
                if(w != 0) { // avoid printing starting node edge with weight 0
                    cout << u << " -- " << v << " == " << w << endl;
                    break;
                }
            }
        }

        // Push all unvisited neighbors
        for(auto [neighbor, weight] : adj[node])
            if(!visited[neighbor])
                pq.push({weight, neighbor});
    }

    cout << "Minimum Cost Spanning Tree: " << mstCost << endl;
}

int main()
{
    int n = 5; // number of nodes

    // edges: {u, v, weight}
    vector<vector<int>> edges = {
        {1,2,2},{1,3,3},{2,3,1},{2,4,4},{3,5,5},{4,5,7}
    };

    primMST(n, edges);

    return 0;
}

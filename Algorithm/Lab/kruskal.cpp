#include <bits/stdc++.h>
using namespace std;

int kruskalMST(int n, vector<vector<int>> &edges) 
{
    // sort edges by weight
    sort(edges.begin(), edges.end(), [](vector<int> &a, vector<int> &b){
        return a[2] < b[2];
    });

    vector<int> parent(n+1);
    for(int i=1; i<=n; i++) parent[i] = i;
    int mstCost = 0;

    for(auto edge : edges)
    {
        int u = edge[0];
        int v = edge[1];
        int w = edge[2];

        // find parent
        while(parent[u] != u) u = parent[u];
        while(parent[v] != v) v = parent[v];

        if(u != v)  // if in different sets
        {
            mstCost += w;
            parent[u] = v;   // union
            cout << edge[0] << " -- " << edge[1] << " == " << edge[2] << endl;
        }
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

		kruskalMST(n, edges);

    return 0;
}

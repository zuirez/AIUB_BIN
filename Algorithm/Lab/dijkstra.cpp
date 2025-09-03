#include <bits/stdc++.h>
using namespace std;

void dijkstra(int n, vector<vector<pair<int,int>>> &graph, int start) 
{
    vector<int> distance(n+1, INT_MAX);
    distance[start] = 0;

    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<>> pq;
    pq.push({0, start});

    while(!pq.empty()) 
    {
        auto [dist, u] = pq.top(); pq.pop();
        if(dist > distance[u]) continue;

        for(auto [v, w] : graph[u]) 
        {
            if(distance[u] + w < distance[v]) 
            {
                distance[v] = distance[u] + w;
                pq.push({distance[v], v});
            }
        }
    }

    cout << "Shortest distances from node " << start << ":\n";
    for(int i=1; i<=n; i++) 
        cout << "To " << i << " = " << distance[i] << endl;
}

int main() 
{
    int n = 5;

    vector<vector<pair<int,int>>> graph = {
        {},                
        { {2,2}, {3,3} },     
        { {3,1}, {4,4} },
        { {5,5} },             
        { {5,7} },             
        {}                      
    };

    int start = 1;
    dijkstra(n, graph, start);

    return 0;
}
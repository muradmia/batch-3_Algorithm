#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 5;
const int INF = 1e9 + 5;
vector<pair<int, int>> gp[N];
int dist[N];
bool visited[N];
void dijkstra(int s)
{
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({0, s});
    dist[s] = 0;
    while (!pq.empty())
    {
        auto parent = pq.top();
        pq.pop();
        int parentnode = parent.second;
        int parentcost = parent.first;
        if (visited[parentnode] && dist[parentnode] < parentcost)
            continue;
        // visited[parentnode] = true;
        for (auto v : gp[parentnode])
        {
            int childnode = v.first;
            int childcost = v.second;
            if (parentcost + childcost < dist[childnode])
            {
                dist[childnode] = parentcost + childcost;
                pq.push({dist[childnode], childnode});
            }
        }
    }
}
int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int u, v, w;
        cin >> u >> v >> w;
        gp[u].push_back({v, w});
        // gp[v].push_back({u,w});
    }
    for (int i = 1; i <= n; i++)
    {
        dist[i] = INF;
    }
    int s;
    cin >> s;
    dijkstra(s);  
    int test;
    cin >> test;
    while (test--)
    {
        int a, b;
        cin >> a >> b;
        if (dist[a] <= b)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}
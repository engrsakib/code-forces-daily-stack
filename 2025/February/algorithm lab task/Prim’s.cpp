#include <bits/stdc++.h>
using namespace std;

int min_key(vector<int> &key, vector<bool> &mst_set, int v)
{
    int min_value = INT_MAX, min_index;
    for (int i = 0; i < v; i++)
    {
        if (mst_set[i] == false && key[i] < min_value)
        {
            min_value = key[i];
            min_index = i;
        }
    }
    return min_index;
}

void print_mst(vector<int> &parent, vector<vector<int>> &graph, int v)
{
    cout << "Edge \tWeight\n";
    for (int i = 1; i < v; i++)
    {
        cout << parent[i] << " - " << i << " \t" << graph[parent[i]][i] << " \n";
    }
}

void prim_mst(vector<vector<int>> &graph, int v)
{
    vector<int> parent(v);
    vector<int> key(v, INT_MAX);
    vector<bool> mst_set(v, false);

    key[0] = 0;
    parent[0] = -1;

    for (int count = 0; count < v - 1; count++)
    {
        int u = min_key(key, mst_set, v);
        mst_set[u] = true;

        for (int i = 0; i < v; i++)
        {
            if (graph[u][i] && mst_set[i] == false && graph[u][i] < key[i])
            {
                parent[i] = u;
                key[i] = graph[u][i];
            }
        }
    }

    print_mst(parent, graph, v);
}

int main()
{
    int v;
   
    cin >> v;

    vector<vector<int>> graph(v, vector<int>(v));

    for (int i = 0; i < v; i++)
    {
        for (int j = 0; j < v; j++)
        {
            cin >> graph[i][j];
        }
    }

    prim_mst(graph, v);

    return 0;
}

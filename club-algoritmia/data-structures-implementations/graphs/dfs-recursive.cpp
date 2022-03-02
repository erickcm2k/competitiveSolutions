#include "iostream"
#include "vector"
using namespace std;

vector<bool> visited;
vector<vector<int>> adj;

/*
    Thanks to recursion, takes advantage of the already existing Call Stack.
    Time Complexity O(V+E)
    V: Number of vertex
    E: Number of edges
*/
void dfs(int currentNode)
{
    visited[currentNode] = true;
    // cout << "[" << currentNode << "] Marked" << endl;
    cout << currentNode << " ";

    for (int e : adj[currentNode])
    {

        if (!visited[e])
        {
            // cout << "[" << currentNode << "]"
            //      << "[" << e << "] NOT visited. Visiting..." << endl;
            dfs(e);
        }
        else
        {

            // cout << "[" << currentNode << "]"
            //      << "[" << e << "] already visited" << endl;
        }
    }
}

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, nodeSize, value, startNode;
    cin >> n >> startNode;
    adj.resize(n);
    visited.resize(n);

    for (int i = 0; i < n; i++)
    {
        cin >> nodeSize;
        for (int j = 0; j < nodeSize; j++)
        {
            cin >> value;
            adj[i].push_back(value);
        }
    }

    dfs(startNode);

    // for (vector<int> node : adj)
    // {
    //     for (int e : node)
    //     {
    //         cout << e << " ";
    //     }
    //     cout << "\n";
    // }

    return 0;
}

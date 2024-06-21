vector<vector<int>> adjList(n);
for (const auto& edge : edges)
{
    adjList[edge[0]].push_back(edge[1]);
    adjList[edge[1]].push_back(edge[0]);
}
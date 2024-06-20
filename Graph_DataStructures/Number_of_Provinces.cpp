#include <iostream>
#include <vector>
using namespace std;

void DFS(vector<int> adjList[], vector<int> &visited, int starting_node)
{
    visited[starting_node] = 1;
    for (auto i:adjList[starting_node])
    {
        if (visited[i]==0)
        {
            DFS(adjList,visited,i);
        }
    }
}

int addEdge(vector<int> adjList[],int node1, int node2)
{
    adjList[node1].push_back(node2);
}

int main()
{
    vector<int> adjList[9];
    vector<int> visited(9,0);
    addEdge(adjList,1,2);
    addEdge(adjList,2,3);
    addEdge(adjList,4,5);
    addEdge(adjList,5,6);
    addEdge(adjList,7,8);
    int count = 0;
    for (int i=1;i<visited.size();i++)
    {
        if (visited[i]==0)
        {
            count++;
            DFS(adjList,visited,i);
        }
    }
    cout<<"count : "<<count<<endl;
    return 0;
}
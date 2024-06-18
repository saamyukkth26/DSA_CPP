#include <queue>
#include <iostream>
using namespace std;

void BFS_Traversal(vector<bool> &visited, int starting_node, vector<vector<int> > &adjList)
{
    queue<int> q;
    visited[starting_node] = true;
    q.push(starting_node);
    while(!q.empty())
    {
        int current_node = q.front();
        q.pop();
        cout<<current_node<<" ";
        for (int neighbor : adjList[current_node])
        {
            if (visited[neighbor]==false)
            {
                visited[neighbor] = true;
                q.push(neighbor);
            }
        }
    }
}

void addEdge(vector<vector<int> > &adjList, int node1, int node2)
{
    adjList[node1].push_back(node2);
}

int main()
{
    int number_of_vertices = 8;
    vector<vector<int> >adjList(number_of_vertices);
    addEdge(adjList,1,2);
    addEdge(adjList,1,6);
    addEdge(adjList,2,1);
    addEdge(adjList,2,3);
    addEdge(adjList,2,4);
    addEdge(adjList,3,2);
    addEdge(adjList,4,2);
    addEdge(adjList,4,5);
    addEdge(adjList,5,4);
    addEdge(adjList,5,7);
    addEdge(adjList,6,1);
    addEdge(adjList,6,7);
    addEdge(adjList,6,8);
    vector<bool> visited(number_of_vertices,false);
    BFS_Traversal(visited,1,adjList);
    cout<<endl;
    return 0;
}
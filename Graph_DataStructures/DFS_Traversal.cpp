#include <iostream>
#include <vector>
using namespace std;

void DFS(vector<int> &visited, vector<vector<int> > &adj,int starting_node, vector<int> &ls)
{
    visited[starting_node] = true;
    ls.push_back(starting_node);
    for (auto i: adj[starting_node])
    {
        if (visited[i]==false)
        {
            DFS(visited,adj,i,ls);
        }
    }
}

void addEdge(vector<vector<int> > &adj,int node1, int node2)
{
    adj[node1].push_back(node2);
}

int main()
{
    int vertices = 9;
    vector<int> visited(vertices,false);
    vector<vector<int> > adjList(vertices);
    vector<int> ls;
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
    DFS(visited,adjList,1,ls);
    for (int i=0;i<ls.size();i++)
    {
        cout<<ls[i]<<" ";
    }
    cout<<" "<<endl;
    return 0;
}
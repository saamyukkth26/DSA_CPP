#include <iostream>
using namespace std;

int main()
{
    //consider graphs nodes are connected and their corresponding edges are represented through a adjacency matrix
    //to convert to adjacency list
    int matrix[0][1] = 20;
    vector<int> adjList[]; //create an array of vectors
    for (int i=0;i<matrix[0].size();i++)
    {
        for (int j=0;j<matrix[0].size();j++)
        {
            if (matrix[i][j]==1 && i!=j)
            {
                adjList[i].push_back(j);
            }
        }
    }
}
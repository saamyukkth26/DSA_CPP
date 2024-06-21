class Solution{
public:   
    
    void DFS(vector<vector<int> > &image, int i, int j, vector<vector<int> > &visited, int newcolor,int oldcolor)
    {
        int n = image.size();
        int m = image[0].size();
        visited[i][j] = 1;
        if (image[i][j]==oldcolor)
        {
            image[i][j] = newcolor;
        }
        vector<pair<int,int> > dir = {{-1,0},{1,0},{0,1},{0,-1}};
        for (auto const k : dir)
        {
            int nrow = i + k.first;
            int ncol = j + k.second;
            if (nrow>=0 && nrow<n && ncol>=0 && ncol<m && image[nrow][ncol]==oldcolor && visited[nrow][ncol]==0)
            {
                DFS(image,nrow,ncol,visited,newcolor,oldcolor);
            }
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int n = image.size();
        int m = image[0].size();
        vector<vector<int> > visited(n,vector<int>(m,0));
        DFS(image,sr,sc,visited,newColor,image[sr][sc]);
        return image;
    }
};
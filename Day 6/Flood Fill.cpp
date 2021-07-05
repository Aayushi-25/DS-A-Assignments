class Solution {
public:
    void temp(vector<vector<int>>& image, int i, int j, int n, int o, vector<vector<bool>>& visited)
    {
        image[i][j]=n;
        visited[i][j]=true;
        if(i>0 && image[i-1][j]==o && !visited[i-1][j]) temp(image, i-1, j, n, o, visited);
        if((i+1)<image.size() && image[i+1][j]==o && !visited[i+1][j]) temp(image, i+1, j, n, o, visited);
        if(j>0 && image[i][j-1]==o && !visited[i][j-1]) temp(image, i, j-1, n, o, visited);
        if((j+1)<image[0].size() && image[i][j+1]==o && !visited[i][j+1]) temp(image, i, j+1, n, o, visited);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int o=image[sr][sc];
        vector<vector<bool>> visited(image.size());
        for(int i=0; i<image.size(); i++)
        {
            for(int j=0; j<image[0].size(); j++)
                visited[i].push_back(false);
        }
        temp(image, sr, sc, newColor, o, visited);
        return image;
    }
};
class Solution {
public:
    int projectionArea(vector<vector<int>>& grid) {
        int sum=0;
        int n=grid.size();
        for(int i=0; i<n; i++)
        {
            sum+=*max_element(grid[i].begin(), grid[i].end());
            int m=grid[0][i];
            for(int j=0; j<n; j++)
            {
                if(grid[i][j]>0) sum++;
                if(m<grid[j][i]) m=grid[j][i];
            }
            sum+=m;
        }
        return sum;
    }
};
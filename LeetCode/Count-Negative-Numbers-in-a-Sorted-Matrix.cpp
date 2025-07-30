class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int row=grid.size();
        int col=grid[0].size();
        int i=row-1;
        int j=0;
        int cnt=0;
        while(i>=0 && j<col)
        {
            if(grid[i][j]<0)
            {
                cnt+=col-j;
                i--;
            }
            else j++;
        }
        return cnt;
    }
};
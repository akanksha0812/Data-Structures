
class Solution {
public:
     int Count(vector<vector<int> >& matrix) {
        // Code here
        int n = matrix.size();
        int m = matrix[0].size();
        int x[8] = {-1,-1,0,1,1,1,0,-1};
        int y[8] = {0,1,1,1,0,-1,-1,-1};
        int ans = 0;
        for(int i = 0;i<n;i++)
        {
            for(int j = 0;j<m;j++)
            {
                if(matrix[i][j]==1){
                int count = 0;
                for(int p = 0;p<8;p++)
                {
                    int row = i+x[p];
                    int col = j+y[p];
                    
                    if( row>=0 && col>=0 && row<n && col<m && matrix[row][col]==0)
                    {
                        count++;
                    }
                }
                if(count%2==0 && count!=0)
                {
                    ans++;
                 
                }
                
                }
            }
        }
        return ans;
    }
};

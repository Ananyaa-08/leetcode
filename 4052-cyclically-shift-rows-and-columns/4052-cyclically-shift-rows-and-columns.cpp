class Solution {
public:
    vector<vector<int>> cyclicShift(int n, vector<vector<int>>& grid, vector<int>& rowShift, vector<int>& colShift) {
        int i=0;
        vector<vector<int>>temp(n, vector<int>(n));
        while(i<n){
            int j=0;
            while(j<n){
                temp[i][(j-rowShift[i]+n)%n]=grid[i][j];
                j++;
            }
            i++;
        }
        i=0;
        while(i<n){
            int j=0;
            while(j<n){
                grid[(i-colShift[j]+n)%n][j]=temp[i][j];
                j++;
            }
            i++;
        }
        return grid;
    }
};
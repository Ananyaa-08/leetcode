class Solution {
public:
    int countIslands(vector<vector<int>>& grid, int k) {
        int m = grid.size();
        int n = grid[0].size();
        int answer = 0;
        int directions[4][2] = {
            {1, 0}, {-1, 0}, {0, 1}, {0, -1}
        };
        for (int row = 0; row < m; row++) {
            for (int col = 0; col < n; col++) {
                if (grid[row][col] == 0)
                    continue;
                long long totalValue = 0;
                stack<pair<int, int>> cells;
                cells.push({row, col});
                totalValue += grid[row][col];
                grid[row][col] = 0;  // Mark as visited
                while (!cells.empty()) {
                    auto [currentRow, currentCol] = cells.top();
                    cells.pop();
                    for (auto& direction : directions) {
                        int newRow = currentRow + direction[0];
                        int newCol = currentCol + direction[1];
                        if (newRow >= 0 && newRow < m &&
                            newCol >= 0 && newCol < n &&
                            grid[newRow][newCol] > 0) {
                            totalValue += grid[newRow][newCol];
                            grid[newRow][newCol] = 0;
                            cells.push({newRow, newCol});
                        }
                    }
                }

                if (totalValue % k == 0)
                    answer++;
            }
        }
        return answer;
    }
};
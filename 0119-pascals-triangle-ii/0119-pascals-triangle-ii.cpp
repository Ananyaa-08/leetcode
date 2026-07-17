class Solution {
public:
    vector<int> getRow(int rowIndex) {
       vector<int> row = {1};

        for (int i = 1; i <= rowIndex; i++) {
            row.push_back(1);   // Add new last element

            // Update from right to left
            for (int j = i - 1; j > 0; j--) {
                row[j] = row[j] + row[j - 1];
            }
        }

        return row; 
    }
};
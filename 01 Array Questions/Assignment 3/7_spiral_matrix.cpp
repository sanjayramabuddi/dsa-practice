54. Spiral Matrix

Given an m x n matrix, return all elements of the matrix in spiral order.

Example 1:

Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
Output: [1,2,3,6,9,8,7,4,5]

Example 2:

Input: matrix = [[1,2,3,4],[5,6,7,8],[9,10,11,12]]
Output: [1,2,3,4,8,12,11,10,9,5,6,7]


class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int row = matrix.size();
        int col = matrix[0].size();
        int totalSize = row*col;

        int startRow = 0;
        int endCol = col-1;
        int endRow = row-1;
        int startCol = 0;

        int count = 0;

        while(count < totalSize) {
            for(int i = startCol; i <= endCol && count < totalSize; i++) {
                ans.push_back(matrix[startRow][i]);
                count++;
            }
            startRow++;

            for(int i = startRow; i <= endRow && count < totalSize; i++) {
                ans.push_back(matrix[i][endCol]);
                count++;
            }
            endCol--;

            for(int i = endCol; i >= startCol && count < totalSize; i--) {
                ans.push_back(matrix[endRow][i]);
                count++;
            }
            endRow--;

            for(int i = endRow; i >= startRow && count < totalSize; i--) {
                ans.push_back(matrix[i][startCol]);
                count++;
            }
            startCol++;
        }
        return ans;
    }
};
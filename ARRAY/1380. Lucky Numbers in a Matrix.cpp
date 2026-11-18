class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();
        vector<int> rmin;
        vector<int> cmax;
        for (int i = 0; i < row; i++) {
            rmin.push_back(*min_element(matrix[i].begin(), matrix[i].end()));
        }
        for (int j = 0; j < col; j++) {
            cmax.push_back(matrix[0][j]);
        }
        for (int i = 1; i < row; i++) {
            for (int j = 0; j < col; j++) {
                cmax[j] = (max(cmax[j], matrix[i][j]));
            }
        }
        vector<int> ans;
        int maxi = *max_element(rmin.begin(), rmin.end());
        int mini = *min_element(cmax.begin(), cmax.end());
        if (maxi == mini) {
            ans.push_back(maxi);
        }
        return ans;
    }
};

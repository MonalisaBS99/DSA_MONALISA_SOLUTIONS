class Solution {
public:
    double average(vector<int>& salary) {
        double sum = 0;
        int mini = *min_element(salary.begin(), salary.end());
        int maxi = *max_element(salary.begin(), salary.end());
        for (int i = 0; i < salary.size(); i++) {
            sum += salary[i];
        }
        double ans = 0;
        ans = (sum - mini - maxi) / (salary.size() - 2);
        return ans;
    }
};

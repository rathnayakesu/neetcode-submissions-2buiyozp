class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {

        int n = temperatures.size();
        vector<int> result(n,0);
        vector<pair<int, int>> stk;

        for (int i = n - 1; i >= 0; i--) {

            while (!stk.empty() && stk.back().first <= temperatures[i]) {
                stk.pop_back();
            }

            if (!stk.empty()) {
                result[i] = stk.back().second - i;
            }

            stk.push_back({temperatures[i],i});
        }

        return result;
        
    }
};

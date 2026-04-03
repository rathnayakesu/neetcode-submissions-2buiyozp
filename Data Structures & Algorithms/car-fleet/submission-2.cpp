class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n = position.size();
        vector<pair<int,int>> ps;

        for(int i = 0; i < n; i++)
            ps.push_back({position[i], speed[i]});

        // Sort by position descending (closest to target first)
        sort(ps.begin(), ps.end(), [](auto& a, auto& b){
            return a.first > b.first;
        });

        vector<double> stk; // stores arrival times

        for(int i = 0; i < n; i++){
            double t = (double)(target - ps[i].first) / ps[i].second;

            // Only add a new fleet if this car can't catch the one ahead
            if(stk.empty() || t > stk.back())
                stk.push_back(t);
            // if t <= stk.back(), it merges into the fleet ahead (do nothing)
        }

        return stk.size();
    }
};
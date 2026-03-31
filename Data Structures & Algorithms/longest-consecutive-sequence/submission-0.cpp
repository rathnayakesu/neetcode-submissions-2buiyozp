class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(), nums.end()); 
        int best = 0; 
        for (int n : s) {
            if (!s.count(n - 1)) { 
                int cur = n, length = 1; 
                while (s.count(cur + 1)) { 
                    cur++; 
                    length++; 
                } 
                best = max(best, length); 
            } 
        }
                
        return best;
    }
};

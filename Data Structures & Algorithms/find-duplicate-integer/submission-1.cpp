class Solution {
public:
    int findDuplicate(vector<int>& nums) {

        unordered_set<int> st;
        vector<int> v;

        for(int n :  nums){
            if(st.insert(n).second){
                v.push_back(n);
            }else{
                return n;
            }
        }
        
    }
};

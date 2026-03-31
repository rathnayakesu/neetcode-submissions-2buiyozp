class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        vector<string> sorted;
        vector<vector<string>> result;
        unordered_map<string, vector<string>> mp;
        unordered_set<string> st;

        for(string s : strs){
            sort(s.begin(), s.end());
            sorted.push_back(s);
        }

        for(int i=0; i<sorted.size(); i++){
            string ss = sorted[i];
            string sts = strs[i];
            if(st.insert(ss).second){
                mp[ss] = {sts};
            }else{
                mp[ss].push_back(sts);
            }
        }

        for(auto it=mp.begin(); it != mp.end(); it++){
            result.push_back(it->second);
        }

        return result;
    }
};

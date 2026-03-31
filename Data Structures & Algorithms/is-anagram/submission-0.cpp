#include <algorithm>
class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<char> arrS;
        vector<char> arrT;
        for(char i : s){
            arrS.push_back(i);
        }
        for(char j : t){
            arrT.push_back(j);
        }
        sort(arrS.begin(), arrS.end());
        sort(arrT.begin(), arrT.end());
        if(arrS==arrT){
            return true;
        }
        return false;

    }
};

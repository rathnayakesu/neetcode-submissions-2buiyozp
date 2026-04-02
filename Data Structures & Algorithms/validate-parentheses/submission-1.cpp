class Solution {
public:
    bool isValid(string s) {

        int l = s.length();
        vector<char> st1;

        if(l%2 != 0){
            return false;
        }
        
        for(char c : s){
            if(c == '[' || c == '{' || c == '('){
                st1.push_back(c);
            }else{
                if(st1.empty()) return false;

                if(c == ')' && st1.back() != '(') return false;
                if(c == ']' && st1.back() != '[') return false;
                if(c == '}' && st1.back() != '{') return false;
                st1.pop_back();
            }
        }

        return st1.empty();
        
    }
};

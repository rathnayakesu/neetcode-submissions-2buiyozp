class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        vector<int> stk;
        int result;

        for(string s : tokens){
            if(s == "*"){
                int b = stk.back();
                stk.pop_back();
                int a = stk.back();
                stk.pop_back();

                int n = a*b;
                stk.push_back(n);

            }
            else if(s == "+"){
                int b = stk.back();
                stk.pop_back();
                int a = stk.back();
                stk.pop_back();

                int n = a+b;
                stk.push_back(n);
            }
            else if(s == "-"){
                int b = stk.back();
                stk.pop_back();
                int a = stk.back();
                stk.pop_back();

                int n = a-b;
                stk.push_back(n);
            }
            else if(s == "/"){
                int b = stk.back();
                stk.pop_back();
                int a = stk.back();
                stk.pop_back();

                int n = a/b;
                stk.push_back(n);
            }
            else{
                stk.push_back(stoi(s));
            }
        }
        return stk.back();
        
    }
};

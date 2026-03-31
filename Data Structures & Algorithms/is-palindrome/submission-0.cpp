class Solution {
public:
    bool isPalindrome(string s) {

        s.erase(remove(s.begin(),s.end(),' '), s.end());
        int i = 0;
        int j = s.length()-1;
        while (i < j) {
        // skip non-alphanumeric characters
            while (i < j && !isalnum(s[i])) i++;
            while (i < j && !isalnum(s[j])) j--;

            if (tolower(s[i]) != tolower(s[j])) {
                return false;
            }

            i++;
            j--;
        }

    return true;
        
    }
};

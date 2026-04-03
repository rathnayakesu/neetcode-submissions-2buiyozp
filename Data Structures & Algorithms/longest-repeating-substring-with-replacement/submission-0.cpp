class Solution {
public:
    int characterReplacement(string s, int k) {

        int l = 0;
        int result = 0;
        int maxF = 0;
        int n = s.length();
        int freq[26] = {0};

        for(int r=0; r<n; r++){

            freq[s[r]-'A']++;
            maxF = max(maxF, freq[s[r]-'A']);

            int wSize = r-l+1;
            int rep = wSize - maxF;

            if(rep > k){
                freq[s[l]-'A']--;
                l++;
            }

            result = max(result, r-l+1);
        }

        return result;
        
    }
};

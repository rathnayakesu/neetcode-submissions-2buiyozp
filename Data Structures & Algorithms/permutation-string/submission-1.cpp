class Solution {
public:
    bool checkInclusion(string s1, string s2) {

        int s1L = s1.length();
        vector<int> freq(26, 0);



        for(int i = 0; i<s1L; i++){
            freq[s1[i]-'a']++;
        }
 
        for(int r = 0; r<s1L; r++){
            freq[s2[r]-'a']--;
        }

        bool allZero = all_of(freq.begin(), freq.end(), [](int x){ return x == 0; });

        if(allZero){
            return true;
        }else{

            for(int i = s1L; i<s2.length(); i++){
                freq[s2[i]-'a']--;
                freq[s2[i-s1L]-'a']++;

                allZero = all_of(freq.begin(), freq.end(), [](int x){ return x == 0; });

                if(allZero){
                    return true;
                }

            }
            return false;
        }



    }
};

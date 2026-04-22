class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {

        int l = 1;
        int r = *max_element(piles.begin(),piles.end());

        while(l<r){

            int k = l+(r-l)/2;
            int hr = 0;

            for(int p : piles){
                hr += (p + k - 1) / k;
            }
            if(hr<=h){
                r = k;
            }else{
                l = k + 1;
            }
        }
        return l;

        
        
    }


};

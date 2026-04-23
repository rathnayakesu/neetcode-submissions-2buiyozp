class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {

        priority_queue<int> maxHeap;

        for(int s : stones){
            maxHeap.push(s);
        }

        while(maxHeap.size() > 1){

            int y = maxHeap.top();
            maxHeap.pop();
            int x = maxHeap.top();
            maxHeap.pop();

            if(x==y){
                continue;
            } 
            else{
                maxHeap.push(y-x);
            }
        }

        if(maxHeap.size()==1){
            return maxHeap.top();
        }else{
            return 0;
        }
        
    }
};

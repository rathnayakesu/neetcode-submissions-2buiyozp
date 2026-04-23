class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {

        priority_queue<pair<double,int>, vector<pair<double,int>>, greater<pair<double,int>>> minHeap;
        vector<vector<int>> result;

        for(int i = 0; i< points.size(); i++){

            double sq = pow(points[i][1],2) + pow(points[i][0],2);

            minHeap.push({sq,i});
        }

        for(int j = 0; j<k; j++){
            result.push_back(points[minHeap.top().second]);
            minHeap.pop();
        }

        return result;
        
        
    }
};

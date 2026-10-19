class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxpr=INT_MIN;
        int minpr=INT_MAX;
        for(int i=0; i<prices.size(); i++){
            minpr=min(minpr, prices[i]);
            maxpr=max(maxpr, prices[i]-minpr);
        }
        return maxpr;        
    }
};
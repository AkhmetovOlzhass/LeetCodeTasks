class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int> answer;
        bool isHas = false;
        for(int i = 0; i<prices.size(); i++){
            for(int j = i+1; j<prices.size(); j++){
                if(prices[i] >= prices[j]){
                    answer.push_back(prices[i] - prices[j]);
                    isHas = true;
                    break;
                } 
            }

            if(!isHas){
                answer.push_back(prices[i]);
            }
            isHas = false;
        }

        return answer;
    }
};
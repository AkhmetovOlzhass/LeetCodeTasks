class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> res;

        unordered_set<int> counter;

        for(int i =0; i<arr.size(); i++){
            res[arr[i]]++; 
        }

        for (auto& [key, val] : res) {
            counter.insert(val);
        }

        if(counter.size() != res.size()){
            return false;
        }

        return true;
    }
};
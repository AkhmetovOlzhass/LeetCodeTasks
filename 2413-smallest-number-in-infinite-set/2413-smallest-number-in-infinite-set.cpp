class SmallestInfiniteSet {
public:
    priority_queue<int, vector<int>, greater<int>> pq;
    unordered_set<int> added;
    int cur = 1;
    SmallestInfiniteSet() {
        
    }
    
    int popSmallest() {
        if (!pq.empty()) {
            int res = pq.top();
            pq.pop();
            added.erase(res);
            return res;
        }
        return cur++;
    }
    
    void addBack(int num) {
        if(num < cur && added.find(num) == added.end()){
            pq.push(num);
            added.insert(num);
        }
    }
};

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */
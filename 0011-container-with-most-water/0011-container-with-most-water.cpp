class Solution {
public:
    int maxArea(vector<int>& height) {
        int p1 = 0;
        int p2 = height.size()-1;

        int max = 0;

        while(p1 < p2){
            int s = 0;  
            int n = p2-p1;

            s= n * min(height[p1], height[p2]);

            if(max< s){
                max = s;
            }
            if(height[p1] > height[p2]){
                p2--;
            } else{
                p1++;
            }
        }

        return max;
    }
};
class Solution {
public:
    int maxArea(vector<int>& height) {
        int a = 0;
        int b = height.size()-1;

        int max = 0;
        while(a<b){
            
            int l = b-a;
            int temp = l * min(height[a], height[b]);
            if(height[a] > height[b]){
                b--;
            } else{
                a++;
            }

            if(temp > max){
                max = temp;
            }
        }

        return max;
    }
};
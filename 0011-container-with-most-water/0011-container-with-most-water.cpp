class Solution {
public:
    int maxArea(vector<int>& height) {
        int a = 0;
        int b = height.size()-1;

        int max = 0;
        while(a<b){
            int temp = 0;
            int l = b-a;
            if(height[a] > height[b]){
                temp = l * height[b];
                b--;
            } else{
                temp = l*height[a];
                a++;
            }

            if(temp > max){
                max = temp;
            }
        }

        return max;
    }
};
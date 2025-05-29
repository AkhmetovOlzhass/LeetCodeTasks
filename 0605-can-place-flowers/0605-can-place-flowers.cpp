class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int a = flowerbed.size();

        for(int i = 0; i < a; i++){
            bool left = i ==0 || flowerbed[i-1] == 0;
            bool right = i ==a-1 || flowerbed[i+1] == 0;

            if(left && right && flowerbed[i] == 0){
                flowerbed[i] = 1;
                n--;
            }
        }

        return n<=0;
    }
};
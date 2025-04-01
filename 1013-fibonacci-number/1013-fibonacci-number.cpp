class Solution {
public:


    int fib(int n) {
        int sum = 0;
        if(n > 1){
            sum = fib(n-1) + fib(n-2);
        } else if(n==1){
            return 1;
        } else{
            return 0;
        }

        return sum;

    }
};
class Solution {
public:
    // int F(int n, int sum) {
    //     if(n == 0) return 0;
    //     n--;
    //     sum += dp(n)
    //     return sum
    // }

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
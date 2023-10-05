// Implement pow(x, n), which calculates x raised to the power n (i.e., xn).

 

// Example 1:

// Input: x = 2.00000, n = 10
// Output: 1024.00000


class Solution {
public:
    double myPow(double x, int n) {

       int p = abs(n);
       double ans = 1.0;
       while(p>=1){
           if(p%2==1){
               ans *=x ;
           }
        p /=2 ;
        x *= x;
       }
       return n<0 ? 1/ans : ans;
        
    }
};

// T.C = O(logn)  
//S.C = O(1)

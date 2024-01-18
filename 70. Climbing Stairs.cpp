class Solution {
public:
    int climbStairs(int n, int a= 1, int b = 0) 

    {

        while (n--)

            a = a + b, b = a - b;

        return a;

    }
        

};
/**
 *  Recursive will cause time limit exceed
 *  Dynamic programming 
 **/

#include <stdio.h>

// recursive version
int climbStairs_re(int n){
    if(n <= 2 && n > 0){
        return n;
    }
    
    return climbStairs_re(n - 1) + climbStairs_re(n - 2);;
}

// dynamic programming version
int climbStairs_dp(int n)
{
    if (n <= 2 && n > 0)
    {
        return n;
    }

    int stair[n + 1], i = 0;

    stair[1] = 1;
    stair[2] = 2;
    for (i = 3; i <= n; i++)
    {
        stair[i] = stair[i - 1] + stair[i - 2];
    }
    return stair[n];
}

int main(){
    printf("%d\n", climbStairs_re(45));
    printf("%d\n", climbStairs_dp(45));
    return 0;
}
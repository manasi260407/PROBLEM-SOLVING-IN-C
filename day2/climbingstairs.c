#include <stdio.h>

int climbStairs(int n)
{
    if (n == 1)
        return 1;

    if (n == 2)
        return 2;

    int prev2 = 1;
    int prev1 = 2;

    for (int i = 3; i <= n; i++)
    {
        int current = prev1 + prev2;

        prev2 = prev1;
        prev1 = current;
    }

    return prev1;
}

int main()
{
    int n = 5;

    int answer = climbStairs(n);

    printf("Number of ways = %d\n", answer);

    return 0;
}
#include <stdio.h>

int majorityElement(int *nums, int n)
{
    int candidate = nums[0];
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (count == 0)
        {
            candidate = nums[i];
        }
        if (nums[i] == candidate)
        {
            count++;
        }
        else
        {
            count--;
        }
    }
}

int main()
{
    int test[] = {3, 2, 3};
    printf("%d", majorityElement(test, 3));
}

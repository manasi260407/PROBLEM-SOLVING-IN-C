#include <stdio.h>

int shipWithinDays(int weights[], int n, int days)
{
    int low = 0;
    int high = 0;

    for (int i = 0; i < n; i++)
    {
        if (weights[i] > low)
        {
            low = weights[i];
        }

        high += weights[i];
    }

    while (low < high)
    {
        int mid = low + (high - low) / 2;

        int currentWeight = 0;
        int requiredDays = 1;

        for (int i = 0; i < n; i++)
        {
            if (currentWeight + weights[i] > mid)
            {
                requiredDays++;
                currentWeight = 0;
            }

            currentWeight += weights[i];
        }

        if (requiredDays > days)
        {
            low = mid + 1;
        }
        else
        {
            high = mid;
        }
    }

    return low;
}

int main()
{
    int weights[] = {3, 2, 2, 4, 1, 4};
    int n = sizeof(weights) / sizeof(weights[0]);
    int days = 3;

    int result = shipWithinDays(weights, n, days);

    printf("Minimum ship capacity: %d\n", result);

    return 0;
}
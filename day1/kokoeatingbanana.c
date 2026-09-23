#include <stdio.h>

int minEatingSpeed(int* piles, int pilesSize, int h)
{
    int low = 1;
    int high = 0;

    for (int i = 0; i < pilesSize; i++)
    {
        if (piles[i] > high)
        {
            high = piles[i];
        }
    }

    while (low < high)
    {
        int mid = low + (high - low) / 2;
        long long hours = 0;

        for (int i = 0; i < pilesSize; i++)
        {
            hours += (piles[i] + mid - 1) / mid;
        }

        if (hours <= h)
        {
            high = mid;
        }
        else
        {
            low = mid + 1;
        }
    }

    return low;
}

int main()
{
    int piles[] = {3, 6, 7, 11};
    int h = 8;

    int pilesSize = sizeof(piles) / sizeof(piles[0]);

    int result = minEatingSpeed(piles, pilesSize, h);

    printf("Minimum eating speed: %d\n", result);

    return 0;
}
#include <stdio.h>

int main()
{
    int amount = 242;
    int notes[] = {100, 50, 20, 10, 5, 2, 1};
    int count = 0;

    for (int note = 0; note < 7; note++)
    {
        if (amount >= notes[note])
        {
            int num = amount / notes[note];
            count += num;
            amount = amount % notes[note];

            printf("%d=>%d\n", notes[note], num);
        }
    }

    printf("\nMinimum number of notes required: %d\n", count);

    return 0;
}
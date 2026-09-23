#include <stdio.h>

int longestUniqueSubstring(char *s)
{
    int set[256] = {0};
    int left = 0;
    int maxLen = 0;

    for (int right = 0; s[right] != '\0'; right++)
    {
        char current = s[right];
        if (set[current] == 1)
        {
            left++;
        }
        set[current] = 1;
        int len = right - left + 1;
        if (len > maxLen)
        {
            maxLen = len;
        }
    }
    return maxLen;
}

    int main()
    {
        char s[] = "abcabcbb";
        printf("%d", longestUniqueSubstring(s));
    }
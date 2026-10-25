
#include<stdio.h>
#include<string.h>

int longestSubstring(char s[])
{
    int last[256];
    int i, start = 0, maxLen = 0, len = strlen(s);

    for(i = 0; i < 256; i++)
    {
        last[i] = -1;
    }

    for(i = 0; i < len; i++)
    {
        if(last[(unsigned char)s[i]] >= start)
        {
            start = last[(unsigned char)s[i]] + 1;
        }
        last[(unsigned char)s[i]] = i;

        if(i - start + 1 > maxLen)
        {
            maxLen = i - start + 1;
        }
    }
    return maxLen;
}

int main()
{
    char s[1000];
    printf("Enter the string\n");
    scanf("%s", s);
    int result = longestSubstring(s);
    printf("The length of the longest substring is: %d", result);
    return 0;
}
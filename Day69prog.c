
#include <stdio.h>
int findRepeatedElement(int nums[], int size)
{
    int result = 0;
    for (int i = 0;i<size;i++)
    {
        result ^=nums[i];
    }
    return result;
}
int main()
{
    int nums1[] = {1, 3, 3, 4};
    int size = sizeof(nums1) / sizeof(nums1[0]);
    int repeatedElement = findRepeatedElement(nums1, size);
    printf("%d\n", repeatedElement);
    return 0;
}

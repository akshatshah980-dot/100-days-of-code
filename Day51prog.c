
#include <stdio.h>
int main()
{
    int n, i, target;
    scanf("%d", &n);
    int nums[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }
    scanf("%d", &target);

    int low, high, mid;
    int first = -1, last = -1;

    low = 0;
    high = n - 1;
    while (low <= high)
    {
        mid = low + (high - low) / 2;
        if (nums[mid] == target)
        {
            first = mid;
            high = mid - 1;   // keep searching on the left
        }
        else if (nums[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }

    low = 0;
    high = n - 1;
    while (low <= high)
    {
        mid = low + (high - low) / 2;
        if (nums[mid] == target)
        {
            last = mid;
            low = mid + 1;    // keep searching on the right
        }
        else if (nums[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }

    printf("%d,%d\n", first, last);
    return 0;
}
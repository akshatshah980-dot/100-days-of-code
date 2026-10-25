
#include <stdio.h>
int kthSmallest(int arr[], int n, int k)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    return arr[k - 1];
}
int main()
{
    int arr[] = {10, 5, 4, 3, 48, 6, 2, 33, 53, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 4;
    int result = kthSmallest(arr, n, k);
    printf("%d\n", result);

    int arr2[] = {7, 10, 4, 3, 20, 15};
    n = sizeof(arr2) / sizeof(arr2[0]);
    k = 3;
    result = kthSmallest(arr2, n, k);
    printf("%d\n", result);

    return 0;
}
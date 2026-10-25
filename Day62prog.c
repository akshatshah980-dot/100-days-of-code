
#include <stdio.h>
int maxSubArraySum(int arr[], int size) 
{
    int maxsofar = arr[0];
    int currmax = arr[0];

    for (int i = 1; i < size; i++) {
        currmax = (arr[i] > currmax + arr[i]) ? arr[i] : currmax + arr[i];
        maxsofar = (maxsofar > currmax) ? maxsofar : currmax;
    }
    return maxsofar;
}
int main() 
{
    int arr[] = {2, 3, -8, 7, -1, 2, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    int max_sum = maxSubArraySum(arr, size);
    printf("%d\n", max_sum);
    return 0;
}
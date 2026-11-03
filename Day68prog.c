
#include <stdio.h>
int findMissingNumber(int nums[], int n) 
{
    int total = n*(n+1)/2;
    int sum = 0;
    for (int i = 0; i<n; i++)
    {
        sum += nums[i];
    }
    
    return total-sum;
}
int main() 
{
    int n;
    printf("Enter the size of the array (n): ");
    scanf("%d", &n);
    int nums[n-1];
    printf("Enter %d integers (between 0 to %d) except one:\n",n-1,n);
    
    for (int i = 0; i < n - 1; i++)
    {
        scanf("%d", &nums[i]);
    }
    int missingNumber = findMissingNumber(nums, n);
    printf("The missing number is: %d\n", missingNumber);
    
    return 0;
}

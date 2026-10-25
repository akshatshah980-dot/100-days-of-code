
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int nums[n];
    printf("Enter the elements of the array: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    
    int totalSum = 0;
    for(int i = 0; i < n; i++) {
        totalSum += nums[i];
    }
    
    int leftSum = 0;
    for(int i = 0; i < n; i++) {
        totalSum -= nums[i];
        
        if(leftSum == totalSum) {
            printf("Pivot index is: %d\n", i);
            return 0;
        }
        
        leftSum += nums[i];
    }
    
    printf("-1\n");
    return 0;
}
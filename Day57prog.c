
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter the elements of the array: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Previous greater elements: ");
    for(int i = 0; i < n; i++) {
        int prev_greater = -1;
        for(int j = i - 1; j >= 0; j--) {
            if(arr[j] > arr[i]) {
                prev_greater = arr[j];
                break;
            }
        }
        printf("%d", prev_greater);
        if(i < n - 1) {
            printf(", ");
        }
    }
    
    return 0;
}
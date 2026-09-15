#include <stdio.h>

int main()
 {

    int size, i, target;
    int start, end, mid;
    int found = 0; // Acts as a flag (0 means not found, 1 means found)
    printf("Enter number of elements: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter sorted elements: ");
    for(i = 0; i < size; i++) 
    {
        scanf("%d", &arr[i]);
    }

 // Get the value you want to search for
    printf("Enter the element to find: ");
    scanf("%d", &target);

    //  Binary Search Logic
    start = 0;
    end = size - 1;

    while(start <= end) 
    {
        mid = (start + end) / 2; // Find the middle position

        if(arr[mid] == target) {
            printf("Element found at index: %d\n", mid);
            found = 1; // Mark as found
            break;     // Stop the loop immediately
        }
        else if(arr[mid] < target) {
            start = mid + 1; // Search the right half
        }
        else {
            end = mid - 1;   // Search the left half
        }
    }

    // 5. If the loop finished and element wasn't found
    if(found == 0) {
        printf("Element not found in the array.\n");
    }

    return 0;
}
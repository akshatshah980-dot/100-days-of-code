#include <stdio.h>

int main() {
    int n;
    
    // Ask the user for the total number of elements
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int pos;
    printf("Enter the index position of the element you want to delete: ");
    scanf("%d", &pos);
    
    // Shift elements to the left to fill the gap
    for (int i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    
    // Reduce the size of the array by 1
    n = n - 1;
    
    // Print the updated array
    printf("The array after deletion is:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
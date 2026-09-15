#include <stdio.h>

int main() {
    int n;
    
    // Ask the user for the total number of elements
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    // Allocate space for the extra element
    int arr[n + 1];
    
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int pos, element;
    printf("Enter the index position where you want to insert the element: ");
    scanf("%d", &pos);
    
    printf("Enter the element you want to insert: ");
    scanf("%d", &element);
    
    // Shift elements to the right to make room
    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    
    arr[pos] = element;
    n = n + 1;
    
    // Print the updated array
    printf("The array after insertion is:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
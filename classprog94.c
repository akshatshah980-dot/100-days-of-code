#include <stdio.h>

int main() {
    int n;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int k;
    printf("Enter the number of positions to rotate: ");
    scanf("%d", &k);
    
    int temp[n];
    
    // Shift each element to its new position in the temporary array
    for (int i = 0; i < n; i++) {
        temp[(i + k) % n] = arr[i];
    }
    
    // Copy the rotated elements back to the original array
    for (int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }
    
    // Print the final rotated array
    printf("The array after rotation is:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
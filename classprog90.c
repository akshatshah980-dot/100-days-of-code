#include <stdio.h>

int main() 
{
    int size, i, num;

    printf("Enter number of elements: ");
    scanf("%d", &size);
    int arr[size];

    printf("Enter sorted elements: ");
    for(i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to insert: ");
    scanf("%d", &num);

    // Shift larger elements to the right
    i = size - 1;
    while(i >= 0 && arr[i] > num) {
        arr[i + 1] = arr[i];
        i--;
    }

    // Insert the new number
    arr[i + 1] = num;
    size++;

    printf("Output:\n");
    for(i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
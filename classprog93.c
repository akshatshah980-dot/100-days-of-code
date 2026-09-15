#include <stdio.h>

int main() 
{
    int n;
    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    if (n < 2)
     {
        printf("Invalid input. The array must contain at least 2 elements.\n");
        return 0;
    }
    
    int arr[n];
    
    printf("Enter %d elements\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Set initial values using the first element
    int largest = arr[0];
    int second_largest = -1; 
    int found = 0; 
    
    // Find the largest and second largest numbers
    for (int i = 1; i < n; i++) 
    {
        if (arr[i] > largest) 
        {
            second_largest = largest;
            largest = arr[i];
            found = 1; 
        } 
        else if (arr[i] < largest)
         {
            if (found == 0 || arr[i] > second_largest)
             {
                second_largest = arr[i];
                found = 1;
            }
        }
    }
    
    // Display the final result
    if (found == 0) {
        printf("There is no second largest element because all elements are equal.\n");
    } else {
        printf("The second largest element in the array is: %d\n", second_largest);
    }
    
    return 0;
}
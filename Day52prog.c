
#include <stdio.h>
int main()
{
    printf("Enter the size of the array: ");
    int n;
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the value of x: ");
    int x;
    scanf("%d", &x);
    int index = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] >= x) {
            index = i;
            break;
        }
    }
    printf("%d\n", index);
    return 0;
}
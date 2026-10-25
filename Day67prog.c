
#include <stdio.h>

int main() {
    int m, n;
    printf("Enter the size of the first array: ");
    scanf("%d", &m);
    printf("Enter the size of the second array: ");
    scanf("%d", &n);

    int nums1[m], nums2[n];
    printf("Enter elements of the first array: ");
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &nums1[i]);
    }

    printf("Enter elements of the second array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &nums2[i]);
    }

    int merged[m + n];
    int i = 0, j = 0, k = 0;

    while (i < m && j < n)
    {
        if (nums1[i] < nums2[j])
        {
            merged[k++] = nums1[i++];
        }
        else
        {
            merged[k++] = nums2[j++];
        }
    }

    while (i < m)
    {
        merged[k++] = nums1[i++];
    }

    while (j < n)
    {
        merged[k++] = nums2[j++];
    }

    printf("Merged array: ");
    for (int l = 0; l < m + n; l++)
    {
        printf("%d ", merged[l]);
    }
    printf("\n");

    return 0;
}

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int total_sum = n * (n + 1) / 2;
    int left_sum = 0;

    for (int x = 1; x <= n; x++) {
        left_sum += x; // Sum from 1 to x
        int right_sum = total_sum - left_sum + x; // Sum from x to n

        if (left_sum == right_sum) {
            printf("%d\n", x);
            return 0;
        }
    }

    printf("-1\n");
    return 0;
}
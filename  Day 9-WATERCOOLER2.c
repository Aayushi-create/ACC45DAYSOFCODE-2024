#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);  // Read number of test cases

    while (T--) {
        long long X, Y;
        scanf("%lld %lld", &X, &Y);  // Read rental cost and purchase cost

        if (Y <= X) {
            printf("0\n");  // If purchase cost is less than or equal to rental cost
        } else {
            long long max_months = (Y - 1) / X;  // Calculate maximum months
            printf("%lld\n", max_months);
        }
    }

    return 0;
}



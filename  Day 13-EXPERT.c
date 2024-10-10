#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T); // Read the number of test cases

    for (int i = 0; i < T; i++) {
        long long X, Y;
        scanf("%lld %lld", &X, &Y); // Read X and Y

        // Check if at least 50% of the problems are approved
        if (2 * Y >= X) {
            printf("YES\n"); // Munchy is an expert
        } else {
            printf("NO\n"); // Munchy is not an expert
        }
    }

    return 0;
}



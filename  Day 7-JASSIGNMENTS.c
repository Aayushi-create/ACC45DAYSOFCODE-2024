#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T); // Read the number of test cases

    while (T--) {
        int X; // The time when Janmansh starts doing assignments
        scanf("%d", &X); // Read the time

        // Check if he can complete the assignments by 10 pm
        if (X <= 7) {
            printf("Yes\n");
        } else {
            printf("No\n");
        }
    }

    return 0;
}



#include <stdio.h>

int main() {
    int T, N, K, M;
    // Read number of test cases
    scanf("%d", &T);

    // Loop through all test cases
    for (int i = 0; i < T; i++) {
        // Read N, K, M for each test case
        scanf("%d %d %d", &N, &K, &M);
        
        // Calculate the maximum number of candies that can fit in one bag
        int capacity_per_bag = K * M;
        
        // Calculate the minimum number of bags required
        // Using (N + capacity_per_bag - 1) / capacity_per_bag to round up
        int bags_needed = (N + capacity_per_bag - 1) / capacity_per_bag;
        
        // Print the result for this test case
        printf("%d\n", bags_needed);
    }

    return 0;
}



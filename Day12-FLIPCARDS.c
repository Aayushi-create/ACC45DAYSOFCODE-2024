#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T); // Read the number of test cases

    while (T--) {
        int N, X;
        scanf("%d %d", &N, &X); // Read N and X for each test case
        
        // Calculate the minimum number of flips
        int flips = (X < N - X) ? X : N - X;
        
        // Output the result
        printf("%d\n", flips);
    }
    
    return 0;
}


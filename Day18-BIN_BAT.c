#include <stdio.h>
#include <math.h>

int main() {
    int T;
    scanf("%d", &T);
    
    while (T--) {
        int N, A, B;
        scanf("%d %d %d", &N, &A, &B);
        
        // Calculate the number of rounds
        int rounds = log2(N);
        
        // Calculate total time
        int total_time = rounds * A + (rounds - 1) * B;
        
        // Output the result for this test case
        printf("%d\n", total_time);
    }
    
    return 0;
}



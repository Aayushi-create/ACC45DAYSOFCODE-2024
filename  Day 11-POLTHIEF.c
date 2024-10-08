#include <stdio.h>
#include <stdlib.h>

int main() {
    int T;
    scanf("%d", &T); // Read the number of test cases
    
    for (int i = 0; i < T; i++) {
        int X, Y;
        scanf("%d %d", &X, &Y); // Read X and Y for each test case
        
        // Calculate the minimum time to catch the thief
        int time = abs(X - Y);
        
        // Output the result
        printf("%d\n", time);
    }
    
    return 0;
}



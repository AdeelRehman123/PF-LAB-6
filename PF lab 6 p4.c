#include <stdio.h>

int main() {
    int n = 6; 
    int a = 1, b = 2, c = 3; 
    int next,i;

    
    printf("%d, %d, %d", a, b, c);

    
    for ( i = 4; i <= n; i++) {
         next = a + b; 
        printf(", %d", next);

        
        a = b;
        b = next;
    }

    printf("\n"); 
    return 0;
}


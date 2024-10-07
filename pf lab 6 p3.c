#include <stdio.h>

int main() {
    int value;

    printf("Enter a number: ");
    scanf("%d", &value);

    if (value < 0) {
        printf("Negative numbers cannot be prime or composite.\n");
    } else if (value == 0 || value == 1) {
        printf("%d is neither prime nor composite.\n", value);
    } else {
        int is_prime = 1;
		int i; 

      
        for ( i = 2; i * i <= value; i++) {
            if (value % i == 0) {
                is_prime = 0; 
                break; 
            }
        }

        if (is_prime) {
            printf("%d is a prime number.\n", value);
        } else {
            printf("%d is a composite number.\n", value);
        }
    }

    return 0;
}


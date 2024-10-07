#include <stdio.h>

int main() {
    int var = 0;

    while (1) {
        int value;
        printf("Enter a value (0 to stop): ");
        scanf("%d", &value);

        if (value == 0) {
            break;
        }

        var += value;
        printf("value after add: %d\n", var);
    }

    printf("Final accumulator value: %d\n", var);

    return 0;
}

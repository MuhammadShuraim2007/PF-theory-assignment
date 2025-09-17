#include <stdio.h>
#include <ctype.h> 

int main() {
    int count[10] = {0};   
    char input;

    printf("Enter digits (0-9). Enter any other character to stop:\n");

    while (1) {
        scanf(" %c", &input);

        if (isdigit(input)) {
            int digit = input - '0';
            count[digit]++;
        } else {
            printf("Invalid input detected. Stopping input.\n");
            break;
        }
    }

    printf("\nNumber    Number of Occurrences\n");

    for (int i = 0; i < 10; i++) {
        printf("%d         %d\n", i, count[i]);
    }

    return 0;
}

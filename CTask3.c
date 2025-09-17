#include <stdio.h>

int main() {
    int age;
    char eyeSight, writtenTest, drivingTest, medicalCertificate;

    printf("Welcome to license eligibility: \n");

    // FIXED: Correct format specifier for int (%d)
    printf("Enter your age: \n");
    scanf("%d", &age);

    if (age >= 18) {
        printf("You are eligible for driving license\n");
    } else {
        printf("You are not eligible for driving license\n");
    }

    // Clear input buffer before reading characters
    // while (getchar() != '\n');

    // FIXED: Added & and space before %c
    printf("Enter your eye sight test result: \n");
    scanf(" %c", &eyeSight);

    if (eyeSight == 'P' || eyeSight == 'p') {
        printf("You are eligible for driving license\n");
    } else {
        printf("You need a prescription of glasses\n");
    }

    // FIXED: Corrected variable and input
    printf("Enter your written test result: \n");
    scanf(" %c", &writtenTest);

    if (writtenTest == 'P' || writtenTest == 'p') {
        printf("You are eligible for driving license\n");
    } else {
        printf("You need to take retake of written\n");
    }

    // FIXED: Corrected variable and input
    printf("Enter your driving test result: \n");
    scanf(" %c", &drivingTest);

    if (drivingTest == 'P' || drivingTest == 'p'  ) {
        printf("You are eligible for driving license\n");
    } else {
        printf("You are not eligible for driving license\n");
    }

    // FIXED: Read medical certificate input only if age >= 60
    if (age >= 60) {
        printf("Do you have medical certificate (Y/N): \n");
        scanf(" %c", &medicalCertificate);

        if (medicalCertificate == 'Y' || medicalCertificate == 'y' ) {
            printf("You are eligible for driving license\n");
        } else {
            printf("You are not eligible\n");
        }
    }

    return 0;
}

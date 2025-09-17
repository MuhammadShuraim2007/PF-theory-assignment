#include <stdio.h>
#include <string.h>

int main() {
    // Inputs
    int accountNumber, actualNumber = 12345;  // example actual account number
    double transactionAmount, dayLimit = 5000;
    int transactionCount, transactionLimit = 3;
    char countryCode[10], setCountryCode[10] = "PK"; // PK = Pakistan (example)
    int FLAG = 0; // 0 = false, 1 = suspicious

    printf("Welcome to Safe Transaction\n");

    // Step 1: Account number check
    printf("Enter Account Number: ");
    scanf("%d", &accountNumber);

    if (accountNumber != actualNumber) {
        FLAG = 1;
        printf("Suspicious Transaction - Wrong Account Number\n");
    }
    else {
        printf("Account Verified\n");

        // Step 2: Transaction amount check
        printf("Enter Transaction Amount: ");
        scanf("%lf", &transactionAmount);

        if (transactionAmount > dayLimit) {
            FLAG = 1;
            printf("Suspicious Transaction - Daily Limit Exceeded\n");
        }
        else {
            // Step 3: Frequent transaction check
            printf("Enter number of transactions in this hour: ");
            scanf("%d", &transactionCount);

            if (transactionCount > transactionLimit) {
                FLAG = 1;
                printf("Suspicious Transaction - Too Many Transactions\n");
            }
            else {
                // Step 4: Foreign transaction check
                printf("Enter Country Code: ");
                scanf("%s", countryCode);

                if (strcmp(countryCode, setCountryCode) != 0) {
                    FLAG = 1;
                    printf("Suspicious Transaction - Foreign Country\n");
                }
            }
        }
    }

    
    // Final decision
    if (FLAG == 1) {
        printf("\nTransaction Suspicious - Forward to Fraud Team\n");
    } else {
        printf("\nTransaction Approved - Proceed Normally\n");
    }

    return 0;
}

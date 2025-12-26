#include <stdio.h>
#include <string.h>

int main() {
    char a[20], b[20];
    int choice;
    int isLoggedIn = 0; // 0 means not logged in, 1 means logged in

    // This loop keeps the program running until you successfully log in
    while (isLoggedIn == 0) {
        printf("\n=== LOGIN SYSTEM ===\n");
        printf("Enter userid and password: ");
        
        // Using " %s %s" to clear any old 'Enter' keys from the terminal buffer
        if (scanf(" %s %s", a, b) != 2) break; 

        if (strcmp(a, "ankursinha") == 0 && strcmp(b, "982298") == 0) {
            printf("\nWelcome, Ankur Sinha!\n");
            isLoggedIn = 1; // This breaks the login loop
        } else {
            printf("Invalid id or password. Please try again.\n");
        }
    }

    // This loop handles the Menu after you have logged in
    while (isLoggedIn == 1) {
        printf("\n--- MAIN MENU ---\n");
        printf("1. View Profile\n");
        printf("2. Check Balance\n");
        printf("3. Logout and Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("\n[PROFILE]: Name: Ankur Sinha | Role: Developer\n");
                break;
            case 2:
                printf("\n[BANK]: Your current balance is $5,000.\n");
                break;
            case 3:
                printf("\nLogging out... Goodbye!\n");
                isLoggedIn = 0; // This exits the menu loop and ends the program
                break;
            default:
                printf("\nInvalid option. Please pick 1, 2, or 3.\n");
        }
    }

    return 0;
}
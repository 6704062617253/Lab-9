#include <stdio.h>
#include <string.h>
#include <ctype.h>

int checkValidPass(char *ps);

int main() {
    char username[50];
    char password[50];
    int attempts = 0;
    const int MAX_ATTEMPTS = 3;

    while (attempts < MAX_ATTEMPTS) {
        printf("Enter username: ");
        scanf("%s", username);

        printf("Enter password: ");
        scanf("%s", password);

        if (!checkValidPass(password)) {
            printf("Invalid password format. Please try again.\n\n");
            attempts++;
            continue;
        }

        if (strcmp(username, "admin") == 0 && strcmp(password, "Ab1Cd2") == 0) {
            printf("Login successful! Welcome, %s.\n", username);
            return 0;
        } else {
            printf("Incorrect username or password.\n\n");
        }
        attempts++;
    }

    printf("Too many failed attempts. Account locked.\n");
    return 0;
}

int checkValidPass(char *ps) {
    int len = strlen(ps);
    if (len != 5) return 0;

    int digitCount = 0;
    for (int i = 0; i < len; i++) {
        if (isdigit(ps[i])) digitCount++;
    }
    if (digitCount < 1) return 0;

    return 1;
}

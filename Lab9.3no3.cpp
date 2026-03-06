#include <stdio.h>
#include <string.h>

int checkLogin(char *login, char *passwd, char *logindb, char *passdb) {
    if (!strcmp(login, logindb) && !strcmp(passwd, passdb))
        return 1;
    else
        return 0;
}

int main() {
    char login[5][64] = {"user1", "user2", "user3", "user4", "user5"};
    char password[5][64] = {"pass1", "pass2", "pass3", "pass4", "pass5"};

    char inputLogin[64], inputPass[64];
    int i, found = 0;

    printf("Enter login : ");
    gets(inputLogin);
    printf("Enter password : ");
    gets(inputPass);

    for (i = 0; i < 5; i++) {
        if (checkLogin(inputLogin, inputPass, login[i], password[i]) == 1) {
            found = 1;
            break;
        }
    }

    if (found)
        printf("Welcome\n");
    else
        printf("Incorrect login or password\n");

    return 0;
}

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[200];
    int countA = 0, countE = 0, countI = 0, countO = 0, countU = 0;
    int i, len;
    char ch;

    printf("Enter string : ");
    gets(str);

    len = strlen(str);
    for (i = 0; i < len; i++) {
        ch = tolower(str[i]);
        if      (ch == 'a') countA++;
        else if (ch == 'e') countE++;
        else if (ch == 'i') countI++;
        else if (ch == 'o') countO++;
        else if (ch == 'u') countU++;
    }

    printf("\nVowel count:\n");
    printf("a : %d\n", countA);
    printf("e : %d\n", countE);
    printf("i : %d\n", countI);
    printf("o : %d\n", countO);
    printf("u : %d\n", countU);

    return 0;
}

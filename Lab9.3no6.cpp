#include <stdio.h>
#include <string.h>

int main() {
    char str[200], toRemove[50], result[200];
    int i, j, k;
    int removeLen, strLen;
    int count[50] = {0};
    int found[50] = {0};

    printf("Enter the string : ");
    gets(str);
    printf("Enter characters to remove : ");
    gets(toRemove);

    strLen    = strlen(str);
    removeLen = strlen(toRemove);

    k = 0;
    for (i = 0; i < strLen; i++) {
        int removed = 0;
        for (j = 0; j < removeLen; j++) {
            if (str[i] == toRemove[j]) {
                count[j]++;
                found[j] = 1;
                removed = 1;
                break;
            }
        }
        if (!removed) {
            result[k++] = str[i];
        }
    }
    result[k] = '\0';

    printf("\nResult string : %s\n", result);

    printf("\n--- Removal Summary ---\n");
    for (j = 0; j < removeLen; j++) {
        if (found[j])
            printf("'%c' : removed %d time(s)\n", toRemove[j], count[j]);
        else
            printf("'%c' : not found\n", toRemove[j]);
    }

    return 0;
}

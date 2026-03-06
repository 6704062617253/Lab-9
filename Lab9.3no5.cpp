#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int i, len, sum;

    while (1) {
        printf("Enter input: ");
        gets(str);

        if (strlen(str) == 0)
            break;

        len = strlen(str);
        sum = 0;
        for (i = 0; i < len; i++) {
            if (str[i] >= '0' && str[i] <= '9') {
                sum += str[i] - '0';
            }
        }

        printf("Sum of digit char: %d\n\n", sum);
    }

    return 0;
}

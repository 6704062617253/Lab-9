#include <stdio.h>

void swapValue(int *a, int *b, int *c);
void swapArray(int a[], int b[], int size);
void printArray(int arr[], int size, const char *label);

int main() {
    int a = 1, b = 2, c = 3;
    printf("Before swap function: a=%d, b=%d, c=%d\n", a, b, c);
    swapValue(&a, &b, &c);
    printf("After swap function: a=%d, b=%d, c=%d\n", a, b, c);

    printf("\n");

    int arr1[] = {10, 20, 30, 40, 50};
    int arr2[] = {11, 22, 33, 44, 55};
    int size = 5;

    printArray(arr1, size, "arr1 before swap");
    printArray(arr2, size, "arr2 before swap");

    swapArray(arr1, arr2, size);

    printArray(arr1, size, "arr1 after swap");
    printArray(arr2, size, "arr2 after swap");

    return 0;
}

void swapValue(int *a, int *b, int *c) {
    int temp = *a;
    *a = *b;
    *b = *c;
    *c = temp;
}

void swapArray(int a[], int b[], int size) {
    int temp;
    for (int i = 0; i < size; i++) {
        temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }
}

void printArray(int arr[], int size, const char *label) {
    printf("%s: ", label);
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

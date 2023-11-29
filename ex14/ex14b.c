#include <stdio.h>

void swapArray(int** p1, int** p2) {
    int* temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

void swapNumber(int* ptr1, int* ptr2) {
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int main(int argc, char* argv[]) {
    int arr1[] = {1, 2, 3};
    int arr2[] = {8, 9, 10, 6};

    int n1 = sizeof(arr1) / sizeof(int);
    int n2 = sizeof(arr2) / sizeof(int);

    // before swap
    printf("Before swap: \n");
    for (int i = 0; i < n1; i++) printf("%d ", arr1[i]);
    printf("\n");
    for (int i = 0; i < n2; i++) printf("%d ", arr2[i]);
    printf("\n"); 

    int *p1 = arr1;
    int *p2 = arr2;
    swapArray(&p1, &p2);
    swapNumber(&n1, &n2);
    printf("After swap n1 is %d\n", n1);
    printf("After swap n2 is %d\n", n2);

    // after swap
    for (int i = 0; i < n1; i++) printf("%d ", p1[i]);
    printf("\n");
    for (int i = 0; i < n2; i++) printf("%d ", p2[i]);
    printf("\n"); 

    return 0;
}
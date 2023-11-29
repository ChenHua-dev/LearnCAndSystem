#include <stdio.h>

int main(int argc, char *argv[]) {
    int ages[] = {23, 43, 12};
    char *names[] = {"Alan", "Frank", "Mary"};  // <names> is an array of char* (char pointers)
    int count = sizeof(ages) / sizeof(int);
    
    // printf("int* is size: %ld\n", sizeof(int*));
    // printf("short* is size: %ld\n", sizeof(short*));
    // printf("short* is size: %ld\n", sizeof(long*));
    // printf("short* is size: %ld\n", sizeof(double*));
    printf("char* is size: %ld\n", sizeof(char*));
    int i = 0;
    for (i = 0; i < count; i++) {
        printf("%s is %d years old. \n", *(names + i), ages[i]);
    }

    for (i = 0; i < count; i++) {
        printf("char** for '%s' is at: %p \n", names[i], (void*) &*(names + i));
    }

    for (i = 0; i < count; i++) {
        printf("'%c' is at %p\n", *(*(names + i)), (void*) *(names + i));
    }
    
    int word_count[3] = {0};
    for (i = 0; i < count; i++) {
        int temp = 0;
        char *c = *(names + i);
        while (*(c++) != '\0') {
            temp++;
            printf("%d ", temp);
        }
        printf("\n");
        word_count[i] = temp;
    }

    printf("---\n");

    // setup the pointers to the start of the array
    int *curr_age = ages;
    char **curr_name = names;

    return 0;
}
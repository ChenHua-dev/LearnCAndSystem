#include <stdio.h>
#include <ctype.h>

// forward declarations
int can_print_it(char c);
void print_letters(char arg[]);

void print_arguments(int argc, char* argv[]) {
    int i = 0;
    for (i = 0; i < argc; i++) {
        print_letters(argv[i]);
    }
}

void print_letters(char arg[]) {
    int i = 0;
    for (i = 0; arg[i] != '\0'; i++) {
        char c = arg[i];
        if (can_print_it(c)) {
            printf("'%c' == %d", c, c);
        }
    }
    printf("\n");
}

int can_print_it(char c) {
    return isalpha(c) || isblank(c);
}

int main (int argc, char* argv[]) {
    int curr;

    printf( "Enter a value :");
    curr = getchar( );

    printf("\n");

    printf( "You entered: ");
    putchar( curr );
    printf("\n");

    print_arguments(argc, argv);
    return 0;
}
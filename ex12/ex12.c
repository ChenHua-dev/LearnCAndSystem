#include <stdio.h>

int main(int argc, char* argv[]) {
    int areas[] = {10, 12, 13, 14, 20};
    char name[] = "Zed";
    char *last_name = "Edward";
    char full_name[] = {
        'z', 'e', 'd',
        ' ', 'A', '.', ' ',
        's', 'h', 'a', 'w', '\0'
    };

    int counter = 0;
    char *c = last_name;
    printf("%c\n", *c);
    while (*c != '\0') {
        counter++;
        c++;
    }
    printf("string '%s' has length: %d\n", last_name, counter);

    printf("The size of an int: %ld\n", sizeof(int));
    printf("The size of areas (int[]): %ld\n", sizeof(areas));
    printf("The num of ints in areas: %ld\n", sizeof(areas) / sizeof(int));
    printf("The first area is %d, the 2nd %d.\n", areas[0], areas[1]);

    printf("The size of a char: %ld\n", sizeof(char));
    printf("The size of name (char[]) %ld\n", sizeof(name));
    printf("The num of chars: %ld", sizeof(name) / sizeof(char));

    printf("The size of full_name (char[]): %ld\n", sizeof(full_name));
    printf("The number of chars: %ld\n", sizeof(full_name)/sizeof(char));
    printf("name=\"%s\" and full_name=\"%s\"\n", name, full_name);

    return 0;
}
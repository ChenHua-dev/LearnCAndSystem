#include <stdio.h>

// this program is intentionally made broken in order to use valgrind

void crash() {
    char* test = NULL;
    int i = 0;
    for (i = 0; i < 1000; i++) {
        printf("%c", test[i]);
    }
}


int main(int argc, char* argv[]) {
    char* name = "Json";
    printf("I will use %s.\n", name);
    crash();
    return 0;
}

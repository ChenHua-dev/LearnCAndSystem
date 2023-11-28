#include <stdio.h>

int main(int argc, char* argv[]) {
    int i = 0;

    for (i = 1; i < argc; i++) {
        printf("arg %d: %s\n", i, argv[i]);
    }

    char* states[] = {"California", "Oregon", "Washington", "Texas"};
    int num_states = sizeof(states) / sizeof(states[0]);
    printf("Total size of states: %ld\n", sizeof(states));
    printf("Each element is of size: %ld %ld %ld %ld\n", sizeof(states[0]), sizeof(states[1]), sizeof(states[2]), sizeof(states[3]));
    printf("Num of states: %d\n", num_states);

    for (i = 0; i < num_states; i++) {
        printf("%s \n", states[i]);
    }
    
    return 0;
}

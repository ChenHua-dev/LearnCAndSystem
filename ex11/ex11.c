#include <stdio.h>

int main(int argc, char* argv[]) {
    int nums[4] = {0};
    char name[4] = {'a'};

    printf("numbers: %d %d %d %d\n",
                    nums[0], nums[1], nums[2], nums[3]);

    printf("name characters: %c %c %c %c\n",
                    name[0], name[1], name[2], name[3]);

    printf("name: %s\n", name);

    // setup the nums
    nums[0] = 1;
    nums[1] = 2;
    nums[2] = 3;
    nums[3] = 4;

    // setup the name
    name[0] = 'Z';
    name[1] = 'e';
    name[2] = 'd';
    name[3] = '\0';

    printf("numbers: %d %d %d %d\n",
                    nums[0], nums[1], nums[2], nums[3]);

    printf("name characters: %c %c %c %c\n",
                    name[0], name[1], name[2], name[3]);

    printf("name: %s\n", name);

    // another way to use name
    char* another = "Zed";
    printf("another: %s\n", another);

    printf("another characters: %c %c %c %c\n",
                                another[0], another[1], another[2], another[3]);
    return 0;
}
#include <stdio.h>

int main(int argc, char* argv[]) {
    int distance = 100;
    float power = 2.345f;
    double super_pwer = 56789.4532;
    char initail = 'A';
    char first_name[] = "Zed";
    char last_name[] = "Shaw";

    printf("You are %d miles away.\n", distance);
    printf("You have %f levels of power.\n", power);
    printf("You have %f awesome super powers.\n", super_pwer);
    printf("I have an initial %c.\n", initail);
    printf("I have a first name %s.\n", first_name);
    printf("I have a last name %s.\n", last_name);
    printf("Full name is: %s %c. %s", first_name, initail, last_name);

    int bugs = 100;
    double bug_rate = 1.2;
    printf("You have %d bugs at the imaginary rate of %f.\n", bugs, bug_rate);

    long universe_of_defects = 1L * 1024L * 1024L * 1024L;
    printf("The entire universe has %ld bugs.\n", universe_of_defects);

    double expected_bugs = bugs * bug_rate;
    printf("You are expected to have %f bugs.\n", expected_bugs);

    double part_of_universe = expected_bugs / universe_of_defects;
    printf("Only a %e portion of the universe.\n", part_of_universe);

    char nul_type = '\0';
    int care_percentage = bugs * nul_type;
    printf("Should care %d%%.\n", care_percentage);
    
    return 0;
}
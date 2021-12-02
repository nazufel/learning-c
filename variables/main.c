#include <stdio.h>
#include <stdlib.h>

int main() {

    // character ("string") variable
    char characterName[] = "John";

    // int variable 
    int characterAge = 35;

    printf("There once was a man named %s.\n", characterName);
    printf("He was %d.\n", characterAge);

    // change age variable
    characterAge = 30;

    printf("He really liked the name %s.\n", characterName);
    printf("but he did not like being %d.\n", characterAge);

    return 0;
}
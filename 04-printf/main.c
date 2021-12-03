#include <stdio.h>
#include <stdlib.h>

int main() {

    int favNum = 90;
    double favFloat = 500.5;

    // print string and a number
    printf("My favorite %s is: %d\n", "number", favNum);

    // print a string and a float with format specifier
    printf("My favorite %s is: %f\n", "float", favFloat);


    return 0;
}
#include <stdio.h>
#include <stdlib.h>

// program reads a floating-point number 
// prints it first in decimal-point notation, then in exponential notation
int main (int argc, char *argv[]) {

    // number of arguments is incorrect
    if (argc != 2) {
      printf("incorrect number of arguments");
      exit(1);
    }
    float input = atof(argv[1]);
    if (input == 0 && (argv[1])[0] != '0') {
        printf("given input is not a float");
        exit(1);
    }
    printf("Input given: %s\n", argv[1]);
    printf("\tDecimal: %f\n", input);
    printf("\tExpoinential: %e\n", input);
    return 0;
}
    

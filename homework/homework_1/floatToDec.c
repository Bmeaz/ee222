#include <stdio.h>
#include <stdlib.h>

// program reads a floating-point number 
// prints it first in decimal-point notation, then in exponential notation
int main (int argc, char *argv[]) {

    // number of arguments is incorrect
    if (argc != 2) {
      printf("\nError: incorrect number of arguments\n\n");
      exit(1);
    }
    float input = atof(argv[1]);
    if (input == 0 && (argv[1])[0] != '0') {
        printf("\nError: given input is not a float\n\n");
        exit(1);
    }
    printf("Input given: %s\n", argv[1]);
    printf("\tDecimal: %f\n", input);
    printf("\tExpoinential: %e\n", input);
    return 0;
}
    

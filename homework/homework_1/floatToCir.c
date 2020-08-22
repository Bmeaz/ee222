#include <stdio.h>
#include <stdlib.h>

// takes in floating point
// returns the circumference of a circle with that diameter
int main (int argc, char *argv[]) {

    float pi = 3.14159265358979323846;
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
    printf("\n\tCircumference: %f\n\n", input * pi);
    return(0);
}

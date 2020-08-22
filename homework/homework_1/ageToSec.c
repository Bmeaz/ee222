#include <stdio.h>
#include <stdlib.h>

// Requests age of the user
// Displays the equivalent number of seconds (3.
int main (int argc, char *argv[]) {
    
    int input;
    float secInYear = 3.156e7;

    // number of arguments is incorrect
    if (argc != 1) {
      printf("\nInvalid Input: incorrect number of arguments\n\n");
      exit(1);
    }
    printf("\nEnter your age as an integer: ");
    scanf("%d", &input);
    if(input <= 0) {
        printf("\n\tInvalid Input: needs to be a positive integer\n\n");
        exit(1);
    }
    printf("\tYour age in seconds is: %.0f\n", secInYear * input);
    return(0);
}

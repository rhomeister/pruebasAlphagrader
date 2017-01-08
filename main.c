/**
 * Program to
 * Author: Eduardo Juarez
 * Date:
 **/

//Include libraries
#include <stdlib.h> //Standard library
#include <stdio.h> //Standard input / output

/**
 * Main function of the program
 */
int main() {
    int a = 0;
    int b = 0;
    int c = 0;
    scanf("%i%*c", &a);
    scanf("%i%*c", &b);
    scanf("%i%*c", &c);
    printf("%i\n", a / b);
    printf("%i\n", a % b);
    printf("%i\n", a / b - c);
    printf("%i\n", a / (b - c));

    return 0;
}

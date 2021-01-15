/* Finding the square root of number using loops
 * For positive real numbers only
 */
#include <stdio.h>
#include <math.h>

int main() {
    // Initialization phase:
    float num, eps = 0.000001;  // A very small number, epsilon
    printf("Enter a number: ");
    scanf("%f", &num);
    float x = num, y = (x + num / x) / 2.0;  // Newton's formula

    // fabs() function for float data type
    while(fabs(y - x) > eps) { // While absolute of y - x is greater than epsilon
        x = y;
        y = (x + num / x) / 2.0;
    }

    // Output phase:
    printf("Square root of %f is: %f\n", num, y);

    return(0); // EXIT_SUCCESS
}

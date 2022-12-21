#include <stdio.h>
#include <math.h>

// Read input from the user and return it
double readInput(void)
{
    double x;
    printf("Enter a value for x between 0 and 1: ");
    scanf("%lf", &x);
    return x;
}

// Check that x is between 0 and 1
int checkInput(double x)
{
    if (x <= 0 || x >= 1)
    {
        printf("Error: x must be between 0 and 1\n");
        return 1;
    }
    return 0;
}

// Calculate the sine of x
double calculateSine(double x)
{
    double result = sin(x);
    // print out the result as a double
    printf("The sine of %lf is %lf\n", x, result);
    return result;
}

// Main function
int main(void)
{
    double x;
    // Read input from the user and return it
    x = readInput();

    // Check that x is between 0 and 1
    if (checkInput(x))
    {
        // non zero is an error code
        return 1;
    }

    // Calculate the sine of x
    double result = calculateSine(x);
    return 0;
}

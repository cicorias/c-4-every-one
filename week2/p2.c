#include <stdio.h>
#define PI 3.14159

//volume: PI * r^2 * h

int main(void)
{
    double radius;
    printf("Enter radius:");
    scanf("%lf", &radius);
    printf("volume is: %f \n\n", (4.0/3.0) * radius * radius * radius);
    return 0;
}
#include <stdio.h>

int main() {
    float fahr, celsius;
    float lower, upper, step;

    lower = 0; /* lower limit of temperature scale */
    upper = 300; /* upper limit */
    step = 20; /* step size */
    celsius = lower;

    printf("Celsius - Fahrenheit Table\n");
    while (celsius <= upper) {
        fahr = (9.0/5.0) * celsius + 32;
        printf("%6.0f %3.1f\n", celsius, fahr);
        celsius += step;
    }
}
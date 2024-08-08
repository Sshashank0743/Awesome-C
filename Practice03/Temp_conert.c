#include <stdio.h>

int main()
{
    float Celsius;
    
    Celsius = 37;
    
    float Fahrenheit;
    
    Fahrenheit = ((9.0 / 5.0) * Celsius) + 32;
    
    printf("%f", Fahrenheit);
    
    return 0;
}
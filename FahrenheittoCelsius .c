/*
Name:Alex
Reg:PA106/G/29040/25
Description:program to convert Fahrenheit to celcius
*/

#include <stdio.h>

float converttoCelsius(float fahrenheit)  
{
    float Celsius;                        
    Celsius = (fahrenheit - 32) * 5.0 / 9.0; 
    return Celsius;                       
}

int main()
{
    float f, result;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &f);

    result = converttoCelsius(f);
    printf("Temperature in Celsius: %.2f\n", result);
    
    return 0;
}
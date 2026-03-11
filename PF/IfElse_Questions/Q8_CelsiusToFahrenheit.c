#include<stdio.h>
void main()
{
    // Declaring Variables
    int temp_celsius;
    float temp_fahrenheit;
    // Reading Temperature in Celsius
    printf("Enter temperature in Celsius : ");
    scanf("%d",&temp_celsius);
    // Converting to Fargrenheit
    temp_fahrenheit=(temp_celsius*9.0/5)+32;
    // Displaying Temperature in Fahrenheit
    printf("Temperature in Fahrenheit : %.1f Degree F",temp_fahrenheit);
}
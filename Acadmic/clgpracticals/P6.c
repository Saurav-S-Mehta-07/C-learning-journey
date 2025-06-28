//Ques 6. Write a program to convert the room temperature (Celsius) to Fahrenheit?
#include<stdio.h>
int main() {

int celsius;
printf("enter the temperature in celsius = ");
scanf("%d", &celsius);

float F;
 F = (celsius * 1.8) + 32;
printf("temperature in Fahrenheit = %f", F);
    return 0;
}
/*output-
enter the temperature in celsius = 37
temperature in Fahrenheit = 98.599998
*/
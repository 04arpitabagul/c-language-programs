//Q.1 Temperature Converter
//Develop a program that converts temperature from degrees Celsius to Fahrenheit using the
//formula: °F = (9/5 × °C) + 32
//Example:
//Input: The temperature in Celsius: 38
//Output: The temperature in Fahrenheit: 100.4

#include<stdio.h>
#include<conio.h>

void main(){
	
	float cel,fahrenheit;
	
	printf("The temperature in Celsius: ");
	scanf("%f",&cel);
	
	fahrenheit = (9.0 / 5.0) * cel + 32;
	
	printf("The temperature in Fahrenheit: %.1f",fahrenheit);
	
	
	
	getch();
}

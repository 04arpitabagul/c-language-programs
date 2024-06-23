//Q.3 Triangle Angle Finder
//Write a program to find the third angle of a right triangle when two other angles are given.

//Example:
//Input: First angle: 65, Second angle: 45
//Output: Third angle: 70

#include<stdio.h>
#include<conio.h>

void main(){
	float a1, a2, a3;
	
	printf("First angle: ");
	scanf("%f",&a1);
	
	printf("second angle: ");
	scanf("%f",&a2);
	
	a3 = 180 - (a1 + a2);
	printf("Third angle: %.0f",a3);
	
	
	getch();
}

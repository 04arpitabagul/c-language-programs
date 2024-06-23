//Q.2 Gross Salary Calculator
//Create a program that calculates the gross salary by adding percentages of HRA, DA, and TA to
//the base salary as chosen by the user.

//Example:
//Input: Base Salary: 100, HRA=10%, DA=5%, TA=8%
//Output: Gross Salary: Rs. 123

#include<stdio.h>
#include<conio.h>

void main(){
	
	float baseSalary, hraPerc, daPerc, taPerc, GrossSalary;
	float HRA, DA, TA;
	
	printf("Enter Base Salary:\n ");
	scanf(" %f",&baseSalary);
	
	printf("Enter HRA Perc:\n ");
	scanf(" %f",&hraPerc);
	
	printf("Enter DA Perc:\n");
	scanf(" %f",&daPerc);
	
	printf("Enter TA Perc:\n ");
	scanf(" %f",&taPerc);
	
	HRA = baseSalary * ( hraPerc / 100);
	DA  = baseSalary * ( daPerc / 100);
	TA  = baseSalary * ( taPerc / 100);
	
	GrossSalary = baseSalary + HRA + DA + TA;
	printf("Gross Salary: Rs %f",GrossSalary);
	
	
	
	getch();
}

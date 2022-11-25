/*Assignment - 12 C Language LIVE Community Classes MySirG*/
/*1. Write a program to print first N terms of a Fibonacci series*/

#include<stdio.h>
#include<conio.h>

int main()
{
	int num1= 1, num2 = 1, num;
	
	printf("Enter Num Value : ");
	scanf("%d",&num);
	
	printf("%d\t",num1);
	printf("%d\t",num2);
	
	for(int i = 0; i <= num; i++)
	{
		num1 = num1 + num2;
		
		num2 = num1 + num2;
		
		printf("%d\t",num1);
		
		printf("%d\t",num2);
	}
	getch();
}
/*
Atish Kumar Sahu
9937401932
kumarsahuatish280301@gmail.com
*/
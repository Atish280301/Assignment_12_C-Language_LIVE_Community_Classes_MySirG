/*Assignment - 12 C Language LIVE Community Classes MySirG*/
/*2. Write a program to calculate HCF of two numbers*/

#include<stdio.h>
#include<conio.h>

int main()
{
	int num1, num2, gcd;

    printf("Enter Num1 Value : ");
    scanf("%d", &num1);
    
    printf("Enter Num2 Value : ");
    scanf("%d",&num2);

    for(int i=1; i <= num1 && i <= num2; ++i)
    {
    	if(num1%i==0 && num2%i==0)
            gcd = i;
    }

    printf("G.C.D of %d and %d is %d", num1, num2, gcd);

}
/*
Atish Kumar Sahu
9937401932
kumarsahuatish280301@gmail.com
*/
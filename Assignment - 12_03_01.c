/*Assignment - 12 C Language LIVE Community Classes MySirG*/
/*3.1 Write a program to display following patterns*/

#include<stdio.h>
#include<conio.h>

int main()
{
	 int row,col=1;  
    printf("Enter the number of rows : ");  
    scanf("%d",&row); 
	 
    for(int i=row;i>=1;i--)  
    {  
        for(int j=1;j<=i-1;j++)  
        {  
          printf(" ");  
        }  
        for(int k=1;k<=col;k++)  
        {  
            printf("*");  
        }  
        printf("\n");  
        col++;  
    } 
	getch(); 
}
/*
Atish Kumar Sahu
9937401932
kumarsahuatish280301@gmail.com
*/
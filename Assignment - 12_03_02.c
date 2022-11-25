/*Assignment - 12 C Language LIVE Community Classes MySirG*/
/*3.2 Write a program to display following patterns*/

#include<stdio.h>
#include<conio.h>

int main()  
{  
    int row,col;  
    printf("Enter the number of rows : ");  
    scanf("%d",&row);  
    col=row;  
   for(int i=1;i<=row;i++)  
   {  
       for(int j=1;j<=col-1;j++)  
       {  
           printf(" ");  
       }
	     
       for(int k=1;k<=2*i-1;k++)  
       {  
         printf("*");  
       }
	    
       col--;  
     
      printf("\n");  
   }  
    getch();  
}
/*
Atish Kumar Sahu
9937401932
kumarsahuatish280301@gmail.com
*/
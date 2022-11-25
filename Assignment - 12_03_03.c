/*Assignment - 12 C Language LIVE Community Classes MySirG*/
/*3.3 Write a program to display following patterns*/

#include<stdio.h>
#include<conio.h>

int main()
{
	int i, j, num;
	
	printf("Enter Num Value : ");
	scanf("%d",&num);
	
    for(i=1;i<=num;i++)
    {
      for(j=num;j>i;j--)
        printf("  ");
      for(j=1;j<=i;j++)
          printf("%d ",j);
      for(j=j-2;j>=1;j--)
          printf("%d ",j);
      printf("\n");
    }
    getch();
}
/*
Atish Kumar Sahu
9937401932
kumarsahuatish280301@gmail.com
*/
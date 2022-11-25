/*Assignment - 12 C Language LIVE Community Classes MySirG*/
/*3.4 Write a program to display following patterns*/

#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,n;
 
    printf("Enter the no of lines\n");
    scanf("%d",&n);
 
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i+1;j++)
        {
            printf("%c",(char)(j+64));
        }
        printf("\n");
    }
    getch();
}
/*
Atish Kumar Sahu
9937401932
kumarsahuatish280301@gmail.com
*/
#include<stdio.h>
#include<conio.h>
void main()
{
 printf("status-\n");
 printf("Enter any no : ");
 scanf("%d", &n);
 for(i=1; i<=n; i++)
    fact = fact * i;
 printf("Fact. value of %d = %d",n,fact);
 
}

#include<stdio.h>
#include<conio.h>
int main()
{
 printf(">>>>>");
 printf("Enter any no : ");
 scanf("%d", &n);
 for(i=1; i<=n; i++)
    fact =fact * i;
 printf("Fact. value of %d = %d",n,fact);
 return 0;
}

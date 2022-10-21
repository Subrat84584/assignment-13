//5.write a recursive function to calculate sum of digits of a given number.
#include<stdio.h>
int digit(int);
int main()
{
   int n;
   printf("enter the value of n");
   scanf("%d",&n);
   int sum=digit(n);
   printf("%d",sum);
   return 0;	
} 
int digit(int n)
{
	if(n==(n/10))
	return;
	return (n%10)+digit(n/10);
}

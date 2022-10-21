//6.write a recursive function to calculate factorial of a given number.
#include<stdio.h>
int fact(int);
int main()
{
    int n;
	printf("enter the value of n");
	scanf("%d",&n);
	int to=fact(n);
	printf("factorial is :%d",to);
	return 0;	
} 
int fact(int n)
{
	if(n==1)
	return 1;
	return n*fact(n-1);
}

//10.calculate the power of any number.
#include<stdio.h>
int main()
{
	int n;
	printf("enter the value of n");
	scanf("%d",&n);
	int cal=power(n);
	printf("%d",cal);
}
int power(int n)
{
	if(n==1)
	return;
	return(n*n);
}

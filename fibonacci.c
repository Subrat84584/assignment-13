//fibonacci series
#include<stdio.h>
int fibonacci(int);
int main()
{
	int n,i,to;
	printf("enter the value of n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		 printf("%d ",fibonacci(i));
	return 0;
}
int fibonacci(int n)
{
	if(n==1||n==2)
	return 1;
	return (fibonacci(n-1)+fibonacci(n-2));
}

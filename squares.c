//4.sum of square of fst N natural number.
#include<stdio.h>
int squares(int);
int main()
{
	int n;
	printf("enter the value of n");
	scanf("%d",&n);
	int sum=squares(n);
	printf("%d",sum);
	return 0;
}
int squares(int n)
{
	if(n==1)
	return 1;
	return n*n+squares(n-1);
}


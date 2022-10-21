//3.recursive calculate sum of fst N odd natural number.
#include<stdio.h>
int main()
{
	int n;
	printf("enter the value of n");
	scanf("%d",&n);
	int sum=odd(n);
	printf("%d",sum);
	return 0;
}
int odd(int n)
{
	if(n==1)
	return 1;
	return 2*n-1+odd(n-1);
}

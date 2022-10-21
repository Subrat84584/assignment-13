//1.recursive function to calculate the sum of fst N natural numbr.
#include<stdio.h>
int natural(int);
int main()
{
	int n;
	printf("enter the value of n");
	scanf("%d",&n);
    int sum=natural(n);
    printf("%d",sum);
    return 0;
}
int natural(int n)
{
	if(n==1)
	return 1;
	else
	return n+natural(n-1);
}

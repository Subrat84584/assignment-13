//9 count digit of a given number.
#include<stdio.h>
int countDigit(int);
int main()
{
	int n,count=0;
	printf("enter your number");
	scanf("%d",&n);
	int t=countDigit(n);
	printf("the total digit is: %d",t);
	return 0;
}
int countDigit(int n)
{
    static int count=0;
	if(n>0)
	{
		count++;
	   countDigit(n/10);
    }
    else
    return count;
	
}

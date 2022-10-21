//wirte a program to print the hcf of two number by recursion and by division method..
#include<stdio.h>
int hcf(int,int);  
int main()
{
	int a=492,b=248,result;
	result=hcf(b,a%b);
	printf("%d",result);
	return 0;
}
int hcf(int a,int b)
{
	if(b==0)
	return a;
	hcf(b,a%b);
}

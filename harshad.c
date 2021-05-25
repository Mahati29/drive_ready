#include<stdio.h>
int harshad(int num)
{
	int r,s=0,n;
	n=num;
	while(num>0)
	{
		r=num%10;
		s=s+r;
		num=num/10;
	}
	if(n%s==0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}
int main()
{
	int n;
	scanf("%d",&n);
	if(harshad(n))
	{
		printf("True");
	}
	else
	{
		printf("False");
	}
	return 0;
}

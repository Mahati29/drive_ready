#include<stdio.h>
void gen_fib(int num)
{
	int a=0,b=1,c,i;
	if(num==0)
	{
		return;
	}
	if(num==1)
	{
		printf("%d",a);
		return;
	}
	printf("%d %d ",a,b);
	for(i=3;i<=num;i++)
	{
      c=a+b;
      a=b;
	  b=c;
	  printf("%d ",c);
	}
}
int main()
{
	int num;
	scanf("%d",&num);
	gen_fib(num);
	return 0;
}

#include<stdio.h>
int fib(int n);
void main()
{
	int n,i=0,c;
	printf("\n enter no of  elements:");
	scanf("%d",&n);
	for(c=1;c<=n;c++)
	{
	printf("\t%d",fib(i));
	i++;
    }
}
int fib(int n)
{
	if(n==0)
	{
	return 0;
    }
    else if(n==1)
    return 1;
    else
    {
     return (fib(n-1)+fib(n-2));
	}
}

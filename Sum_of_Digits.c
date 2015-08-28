#include<stdio.h>
int sum(int);
void main()
{
	int x=0,a; 
	printf("enter a number\n");
	scanf("%d",&a);
	
	x=sum(a);
	printf("sum of the given number is%d",x);
}
int sum(int n)
{
	int s = 0, d = 0;
	int t = n;
	if (t< 0)
	{
		t = -(t);
	}
	while (t > 0)
	{
		d = t % 10;
		s = s + d;
		t = t / 10;
	}
	if (n > 0)
		return s;
	else
		return -s;
}



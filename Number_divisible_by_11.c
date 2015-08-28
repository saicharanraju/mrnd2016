#include<stdio.h>
int check(int n);
void main()
{
	int n;
	printf("enter a number\n");
	scanf("%d", &n);
	check(n);
}
int check(int n)
{
	int i,d,s=0,x,t=0;
	for (i = 0; n > 0; i++)
	{
		if (i % 2 == 0)
		{
			d = n % 10;
			s = s + d;
			n = n / 10;
		}
		else
		{
			x = n % 10;
			t = t + x;
			n = n / 10;
		}
	}
		if ((s - t) > 0)
			check(s - t);
		else if (s==t)
			printf("given is divisible by 11 ");
		else
			printf("given is not divisible by 11");


	
}

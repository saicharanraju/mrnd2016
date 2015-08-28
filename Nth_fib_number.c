#include<stdio.h>
void main()
{
	int i, n, j, k=2,c=0,a=1,b=0;
	printf("enter the nth elements u wanted to be printed\n");
	scanf("%d", &n);
	for (i = 2; i < n+3; i++)
	{
		c = a + b;
		a = b;
		b = c;
		/*printf("%d\t", c);*/
		
		if (k == n)
			printf("\n%d", c);
		k++;
	}
}
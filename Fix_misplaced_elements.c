#include<stdio.h>
void misplace(int a[],int);
void main()
{
	int *p,n;
	printf("no. of elements u want to enter\n");
	scanf("%d",&n);
	p = malloc(n*sizeof(int));
	printf("enter the elements\n");
	for (int i = 0; i < n; i++)
		scanf("%d", p + i);
	misplace(p,n);
		
}
void misplace(int a[],int n)
{
	int temp,x, y, i=0;
	if (a[0] < a[1])
	{
		for (i = 1; i < n;)
		{
			if (a[i]<a[i + 1] && a[i]>a[i - 1])
				i++;
			else
			{
				x = i;
				break;
			}
		}
		for (i = x + 1; i < n;)
		{
			if ((i == n - 1) && a[i] < a[i - 1])
			{
				y = i;
				break;
			}
			if (a[i] <a[i + 1])
				i++;
			else if (a[i]>a[i + 1])
			{
				y = i + 1;
				break;
			}
			else
			{
				y = i; break;
			}
		}
	}
	else
	{
		x = i;
		for (i = x + 1; i < n;)
		{
			if (a[i] < a[i + 1])
			{
				i++;
			}
			else if (a[i]>a[i + 1])
			{
				y = i + 1;
				break;
			}
			else
			{
				y = x + 1;
				break;
			}
		}y = i+1;
	}
	temp = a[x];
	a[x] = a[y];
	a[y] = temp;
	printf("the elements in order are\n");
	for (i = 0; i < n; i++)
		printf("%d\t", a[i]);
}

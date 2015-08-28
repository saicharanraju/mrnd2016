#include<stdio.h>
void sum(int [],int,int);
void main()
{
	int n,i, a[10],k;
	printf("enter no. of elements\n");
	scanf("%d", &n);
	printf("enter the elements\n");
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
	printf("enter the sum to be checked\n");
	scanf("%d", &k);
	sum(a,n,k);
}
void sum(int a[],int n,int k)
{
	int i, j,t;
	for (i = 0; i < n; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			t = a[i] + a[j];
			if (k ==t)
			{
				printf("%d\t", a[i]);
				printf("%d\t", a[j]);
			}
		}
	}
	printf("bye");
}
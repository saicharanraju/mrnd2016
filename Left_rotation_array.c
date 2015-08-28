#include<stdio.h>
void change(int [],int);
void main()
{
	int a[5]; int n, i;
	printf("enter no.of elements \n");
	scanf("%d",&n);
	
	printf("enter %d elements\n",n);
	for (i = 0; i < n; i++)
		scanf("%d",&a[i]);
	change(a,n);
}
void change(int a[],int n)
{
	int i,j,y,x;
	printf("enter no. of rotations\n");
	scanf("%d", &x);
	for (i = 0; i <x; i++)
	{
		y = a[n - 1];
		for (j = n - 1; j > 0; j--)
		{
			a[j] = a[j - 1];
		}
		a[0] = y;
	}
	for (i = 0; i < n; i++)
		printf("%d",a[i]);
}
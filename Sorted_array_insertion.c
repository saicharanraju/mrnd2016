#include<stdio.h>
void insert(int[], int, int);
void main()
{
	int i, j, n, a[10];
	printf("enter the number of elements \n");
	scanf("%d", &n);
	printf("enter %d elements", n);
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
	printf("enter the element to be inserted\n");
	scanf("%d", &j);
	insert(a, n, j);

}
void insert(int a[], int n, int k)
{
	int i, j, temp;
	/*	for (i = 0; i < n; i++)
	{
	for (j = i + 1; j < n - i; j++)
	{
	if (a[i] > a[j])
	{
	temp = a[i];
	a[i] = a[j];
	a[j] = temp;
	}

	}
	}*/
	printf("entered elements are\n");
	for (i = 0; i < n; i++)
		printf("%d", a[i]);
	for (i = 0; i < n;)
	{
		if (k > a[i])
			i++;
		else
			break;
	}
	for (j = n; j > i; j--)
	{
		a[j] = a[j - 1];
	}
	a[j] = k;
	n++;
	printf("the sorted array is\n");
	for (i = 0; i < n; i++)
		printf("%d\t", a[i]);
}
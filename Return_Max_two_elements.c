#include<stdio.h>
void ret(int a[],int b[],int n);
void main()
{
	int large,b[10], i, n, a[10];
	printf("enter no. of elements \n");
	scanf("%d", &n);
	printf("enter the elements\n");
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
	ret(a,b,n);
	
	for (i = 0; i < 2; i++)
		printf("%d\t", b[i]);
}
void ret(int a[], int b[], int n)
{
	int large,k=0, small, i,j=0;
	large = a[0];
	for (i = 1; i < n; i++)
	{
		
		if (a[i] > large)
		{
			small = large;
			k = large;
			large = a[i];
			j++;
		}
		else if (j == 0 && a[i] != a[i - 1])
		{
			small = a[i];
			j++;
		}
		else
		{ }
		
		

	}
	b[0] = large;
	b[1] = small;

}
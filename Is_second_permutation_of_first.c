#include<stdio.h>
void permutation(char[], char[]);
void main()
{
	char a[20], b[20];
	printf("enter the first string\n");
	scanf("%s", a);
	printf("enter the second string\n");
	scanf("%s", b);
	permutation(a, b);
}
void permutation(char a[], char b[])
{
	int c[26],i,l,j,k=0/*,m*/;
	char d,m;
	for (i = 0; i < 26; i++)
		c[i] = 0;
	for (i = 0; a[i]; i++)
	{
		d = a[i];
		j = d - 'a';
		if (c[j] == 1)
			c[j] = 0;
		else
			c[j] = 1;
		m=b[i];
		l = m - 'a';
		if(c[l]==1)
		c[l]=0;
		else
		c[l]=1;
		
	}
	for (i = 0; i < 26; i++)
	{
		if (c[i] != 0)
		{
			k = 1;
			break;
		}
	}
	if (k == 1)
		printf("string 2 is not permutation of string 1\n");
	else
		printf("string 2 is permutation of string 1");
}
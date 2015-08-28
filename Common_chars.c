#include<stdio.h>
void common(char [],char []);
void main()
{
	char a[20], b[20],c;
	printf("enter the first string\n");
	scanf("%s", a);
	printf("enter the second string\n");
	scanf("%s", b);
	common(a, b);
}
void common(char a[], char b[])
{
	char x;
	int i,c[26], j, k,l,m,y=0, d=0;
	for (i = 0; i < 26; i++)
		c[i] = 0;
	for (j = 0; a[j]; j++)
	{
		x = a[j];
		d = x - 'a';
		c[d] = 1;
	}
	for (k = 0; b[k]; k++)
	{
		x = b[k];
		y= x - 'a';
		if (c[y] == 1||c[y]==2)
		{
			c[y] = 2;
		}
		else
			c[y] = 1;
	}
	for (l = 0; l < 26; l++)
	{
		if (c[l] == 2)
			printf("%c\t", 97 + l);

	}
}
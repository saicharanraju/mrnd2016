#include<stdio.h>
int traverse(char [],int);
void main()
{
	char a[10]; int l,n; 
	printf("enter the string\n");
	gets(a);
	printf("enter the value of k");
	scanf("%d",&n);
	l=traverse(a,n);
	if (l == -1)
	{
		printf("error array out of bound");
	}
	printf("the value is %c",a[l]);
}
int traverse(char a[],int k)
{
	int i;
	for (i = 0; a[i]; i++)
	{
		if (a[i+k]== '\0')
		{
	     	
				return i;
		}
		
	}
	return -1;
}
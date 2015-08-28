#include<stdio.h>
int length(char b[]);
void main()
{
	char a[20];
	int l;
	printf("enter a string\n");
	gets(a);
	l = length(a);
	printf("length of the string is %d", l);
}
int length(char b[])
{
	int i=0;
	char *p;

	for (p = b; *p != '\0'; p++)
	{
		i++;
	}
	return i;
}

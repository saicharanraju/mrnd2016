#include<stdio.h>
void insert(char[], char[]);
void main()
{
	char a[20], b[20];
	printf("enter the first string\n");
	gets(a);
	printf("enter the string to be inserted in the middle\n");
	gets(b);
	insert(a, b);
}
void insert(char a[], char b[])
{
	int i, count = 0;
	printf("the new string is\t");
	for (i = 0; a[i]; i++)
	{ 
		if (a[i] == '[' || a[i] == '{' || a[i] == '<' || a[i] == '(')
			printf("%c", a[i]);
		else if (count == 0)
		{
			puts(b);
			count++;
			printf("%c", a[i]);
		}
		else
			printf("%c", a[i]);
	}
}
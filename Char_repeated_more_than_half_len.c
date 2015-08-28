#include<stdio.h>
void repeat(char[]);
void main()
{
	char a[20]; 
	printf("enter the set of characters\n");
	scanf("%s", a);
	repeat(a);
}
void repeat(char a[])
{
	int i, j, count=0;
	char c,b;
	c = a[0];
	for (i = 0; a[i]; i++)
	{
		if (c == a[i])
			count++;
		else if (c != a[i])
		{
			if (count == 0)
			{
				c = a[i];
				count++;
			}
			else
				count--;
		}
	}
	if (count >= 0)
	{
		for (i = 0, j = 0; a[i]; i++)
		{
			if (c == a[i])
				j++;
		}
	}
	if (j >= (i / 2))
		printf("the char greater than len/2 is %c", c);
	else
		printf("no char is greater than len/2");
			
}
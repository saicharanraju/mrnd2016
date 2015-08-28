#include<stdio.h>
void string(char []);
void main()
{
	char s[10];
	printf("enter a string\n");
	scanf("%s", s);
	string(s);
}
void string(char s[])
{
	int i, j, l, flag = 0;
	for (l = 0; s[l] != '\0'; l++);
	for (i = 0, j = l-1; i < j; i++, j--)
	{
		if (s[i] != s[j])
		{
			flag = 1;
			break;
		}
	}
	if (flag == 0)
		printf("the given string is palindrome");
	else
		printf("the given sstring is not palindrome");

}

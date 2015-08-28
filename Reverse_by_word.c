#include<stdio.h>
#include<ctype.h>
void reverse(char[]);
void rev(char[], int, int);
void main()
{
	char a[50];
	printf("enter a sentence\n");
	gets(a);
	reverse(a);

}
void reverse(char a[])
{
	
	int i,m, j, n, t = 0, k; char temp;
	for (i = 0; a[i] != '\0'; i++);
	for (j = 0, k = i - 1; j < k; j++, k--)
	{
		temp = a[j];
		a[j] = a[k];
		a[k] = temp;
	}
	
	for (m = 0; a[m]; m++)
	{
		
		if (a[m]==' ')/* || a[m] == '\0')*/
		{
			n = m;
			rev(a, m - t, m);
			t = 0;
		}
		if (a[m]!=' ' && a[m]!='\0')
			t++;
		

	}
	if (a[m] == '\0')
		rev(a, m - t, m);
	printf("reversed string is\n");
	puts(a);
}
void rev(char a[], int t, int k)
{
	char temp;
	for (k--; t < k; t++, k--)
	{
		temp = a[t];
		a[t] = a[k];
		a[k] = temp;

	}
	
}
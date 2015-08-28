#include<stdio.h>
#include<string.h>
void date();
void main()
{
	date();
}
void date()
{
	char m[12][10] = { "january", "february", "march", "april", "may", "june", "july", "august", "september", "october", "november", "december" };
	char y[100][20] = { "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "ninteen", "twenty", "twentyone", "twentytwo", "twentythree", "twentyfour", "twentyfive", "twentysix", "twentyseven", "twentyeight", "twentynine", "thirty", "thirtyone", "thirtytwo", "thirtythree", "thirtyfour", "thirtyfive", "thirtysix", "thirtyseven", "thirtyeight", "thirtynine", "fourty", "fourtyone", "fourtytwo", "fourtythree", "fourtyfour", "fourtyfive",
		"fourtysix", "fourtyseven", "fourtyeight", "fourtynine", "fifty", "fiftyone", "fiftytwo", "fiftythree", "fiftyfour", "fiftysix", "fiftyseven", "fiftyeight", "fiftynine", "sixty", "sixtyone", "sixtytwo", "sixtythree", "sixtyfour", "sixtyfive", "sixtysix", "sixtyseven", "sixtyeight", "sixtynine", "seventy", "seventyone", "seventytwo", "seventythree", "seventyfour", "seventyfive", "seventysix", "seventyseven", "seventyeight", "seventynine", "eighty", "eightyone", "eightytwo", "eightythree", "eightyfour", "eightyfive", "eightysix", "eightyseven", "eightyeight", "eightynine", "ninty", "nintyone", "nintytwo", "ninetythree", "nintyfour", "nintyfive", "nintysix", "nintyseven", "nintyeight", "nintynine" };
	char d[31][20] = { "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "ninteen", "twenty", "twentyone", "twentytwo", "twentythree", "twentyfour", "twentyfive", "twentysix", "twentyseven", "twentyeight", "twentynine", "thirty", "thirtyone" };
	char yy[11][30] = { "one thousand", "eleven hundred", "tweleve hundred", "thirteen hundred", "fourteen hundred", "fifteen hundred", "sixteen hundred", "seventeen hundred", "eighteen hundred", "ninteen hundred", "two thousand" };
	char a[20];
	int h=0,j = 0, t = 0, z = 0, x = 0, i = 0, k = 0, l = 0,month=0,year=0,date=0,length;
	printf("enter the date\n");
	gets(a);
	length = strlen(a);
	i = length-1;
	while (i >= 0)
	{
		l = 0;  k = 0;
		while (a[i] != '-' && i>=0)
		{
			j = a[i];
			if (j == 48)
				j = 0;
			else if (j == 49)
				j = 1;
			else if (j == 50)
				j = 2;
			else if (j == 51)
				j = 3;
			else if (j == 52)
				j = 4;
			else if (j == 53)
				j = 5;
			else if (j == 54)
				j = 6;
			else if (j == 55)
				j = 7;
			else if (j == 56)
				j = 8;
			else if (j == 57)
				j = 9;
			else
			{
			}
			k = k * 10 + j;
			l++;
			i--;
		}
		x++;
		if (x == 1)
		{
			while (k > 0)
			{
				t = k % 10;
				year = year * 10 + t;
				k = k / 10;
			}
		}

		if (x == 2)
		{
			while (k > 0)
			{
				t = k % 10;
				month = month * 10 + t;
				k = k / 10;
			}
		}
		else if (x==3)
		{
			while (k > 0)
			{
				t = k % 10;
			    date = date * 10 + t;
				k = k / 10;
			}
		}
		i--;
	}
	if (month > 12 || date > 31 || year > 9999||((month==4||month==6||month==9||month==11)&&date>30))
		printf("wrong date");
	else
	{
		printf("%s\t", d[date - 1]);
		printf("%s\t", m[month - 1]);
		if (h == 0)
		{
			t = year / 100;
			z = year % 100;
			printf("%s", yy[t - 10]);
			printf("%s\n", y[z - 1]);
		}
		if (year % 4 == 0 || year % 100 != 0 && year % 400 == 0)
		{
			if (date == 29)
				printf("%d is leap year", year);
			printf("%d is leap year ", year);
		}
	}
}
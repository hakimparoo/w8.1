#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void Cut(char*);
int main()
{
	char str[50];
	printf("Input string =>");
	scanf("%s", str);
	Cut(str);
	return 0;
}
void Cut(char* x)
{
	while (*x != '\0')
	{
		if (*x != *(x + 1))
		{
			printf("%c", *x);
		}
		x++;
	}
}
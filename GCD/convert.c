#include<stdio.h>

int convert();

int main()
{
	int num = convert();
	printf("%d", num);
}

int convert()
{
	int num = 0;
	char ch;
	while((ch = getchar()) != '\n')
	{
		if(ch >= '0' && ch <= '9')
			num = num*10 + (ch - '0');
	}
	return num;
}

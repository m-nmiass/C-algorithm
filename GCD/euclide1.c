#include<stdio.h>

int gcd (int x, int y);
void swap(int *a, int *b);

int main()
{
	int x, y;

	printf("This program calculate The gcd of a number using substraction way\n");

	printf("Enter the first number : ");
	scanf("%d", &x);

	printf("Enter the second number : ");
	scanf("%d", &y);

	int GCD = gcd(x, y);

	printf("%d %d gcd is %d", x, y, GCD);
}

int gcd (int x, int y)
{
	while(x > 0){
		if(y > x)
			swap(&x, &y);
		x = x - y;
	}
	return y;
}

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

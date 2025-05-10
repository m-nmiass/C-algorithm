#include<stdio.h>

struct{
	int numerator;
	int denominator;
}fraction;

void swap(int *a, int *b);
int gcd(int a, int b);

int main()
{
	int a;
	int b;

	printf("Enter the fraction\n");
	printf("Enter the numerator : ");
	scanf("%d", &a);
	printf("Enter the denominator : ");
	scanf("%d", &b);
	int GCD = gcd(a, b);
	fraction.numerator = a / GCD;
	fraction.denominator = b / GCD;

	printf("The gcd is %d %d/%d", GCD, fraction.numerator, fraction.denominator);
}

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = *a;
}

int gcd(int a, int b)
{
	while(a > 0){
		if(a < b)
			swap(&a, &b);
		a = a - b;
	}
	return b;
}

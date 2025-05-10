#include<stdio.h>

int gcd3(int a, int b, int c);
int gcd(int a, int b);
void swap_bs(int *a, int *b, int *c);
void swap(int *a, int *b);

int main()
{
	int a;
	int b;
	int c;

	printf("Calculate GCD of 3 numbers\n");
	
	printf("Enter the first number : ");
	scanf("%d", &a);

	printf("Enter the second number : ");
	scanf("%d", &b);

	printf("Enter the third number : ");
	scanf("%d", &c);

	int GCD = gcd(a, gcd(b, c));

	printf("gcd is %d", GCD);
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

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

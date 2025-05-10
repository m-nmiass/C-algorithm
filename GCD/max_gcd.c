#include<stdio.h>
#include<limits.h>

int gcd(int a, int b);
void swap(int *a, int *b);

int main()
{
	int a = INT_MAX;
	int b = INT_MAX - 1;

	while(1){
		if(gcd(a, b) == 1){
			printf("The largest 2 pairs are : %d %d", a, b);
			return 0;
		}
		a--;
		b--;
	}
}

int gcd(int a, int b)
{
	while(b > 0){
		int temp = a % b;
		a = b;
		b = temp;
	}
	return a;
}

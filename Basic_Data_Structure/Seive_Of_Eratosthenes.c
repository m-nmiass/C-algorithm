#include<stdio.h>
#include<limits.h>
#include<stdbool.h>

#define N 700000
int main()
{
	bool a[N];
	int i;
	int j;
	for(i = 1, a[0] = 0; i < N; i++)
		a[i] = 1;
	for(i = 2; i <= N/2; i++)
		for(j = 2; j <= N/i; j++)
			a[i*j - 1] = 0;

	for(int count = 0, i = 0; i < N; i++){
		if(count && count % 20 == 0 && a[i])
			printf("\n");
		if(a[i]){
			printf("%7d", i+1);
			count++;
		}
		if(i == N - 1)
			printf("\n There is %d prime number up to %d %g", count, N, (float)N/count);
	}

}

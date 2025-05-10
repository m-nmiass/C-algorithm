#include<stdio.h>
#include<stdbool.h>

int main()
{
	int num;
	int i = 0;

	printf("Enter the number : ");
	scanf("%d", &num);
	
	if(num == 0){
		printf("0");
		return 0;
	}

	bool binary[64] = {0};

	for(; num > 0; num /= 2)
		binary[i++] = num%2;

	i--;
	for(;i >= 0; i--)
	       printf("%d", binary[i]);
	return 0;	
}

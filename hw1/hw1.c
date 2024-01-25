#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	if(n % 2 == 0)
	{
		printf("non prime");
	}
	else if(n == 1 && n == 0)
	{
		printf("non prime");
	}
	else
	{
		printf("prime");
	}
	int sum;
	for(i = 1; i <= n; i++)
	{
		printf("loop");
		sum += (i*i*i);
	}
	printf("%d", sum)
	return 0;
}

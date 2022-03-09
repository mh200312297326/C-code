#include <stdio.h>

int prime(int n)
{
	int i = 0;
	for (i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			return 0;
		}
	}
	return 1;
}

int main()
{
	int i = 0;
	for (i = 100; i <= 200; i++)
	{
		if (prime(i) == 1)
			printf("%d", i);
	}
	return 0;
}
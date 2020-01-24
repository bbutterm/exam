#include <stdio.h>
#include <stdlib.h>

void fprime(int a)
{
	int prime = 2;
	if (a == 0)
	{
		printf("null");
		prime = 0;
	}
	while (a != prime)
	{
		if (a%prime==0)
		{
			a/=prime;
			printf("%d",prime);
			prime=2;
		}
		else
		{
			prime++;
			continue;
		}
		printf("*");
	}
	printf("%d",prime);
}
int main(int ac, char **av)
{
	if (ac == 2)
		fprime(atoi(av[1]));
	printf("\n");
}

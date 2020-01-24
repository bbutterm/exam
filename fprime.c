#include <stdio.h>
#include <stdlib.h>

void fprime(int a)
{
	int prime = 2;
	if (a == 0)
		printf("0");
	while (a >= 2)
	{
		if (a%prime == 0)
		{
			a/=prime;
			printf("%d",prime);
			prime--;		
			if (a>2)
				printf("*");
		}
		prime++;
	}
}
int main(int ac, char **av)
{
	if (ac == 2)
		fprime(atoi(av[1]));
	printf("\n");
}

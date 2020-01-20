#include <stdio.h>
#include <stdlib.h>

void ft_prime(unsigned int a)
{
	int prime = 2;
	if (a <= 2)
		printf("%d",a);
	else
	{
		while (a >= 2)
		{
			if (a%prime == 0)
			{
				printf("%d",prime);
				a/=prime;
				prime--;
				if (a!=1)
					printf("*");
			}
			prime++;
		}
	}

}

int main(int ac, char **av)
{
	if (ac == 2)
	{
		ft_prime(atoi(av[1]));	
	}
	printf("\n");
}

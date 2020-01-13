#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int ft_atoi(char *s)
{
	int sign;
	long r;
	int i;

	i = 0;
	r = 0;
	sign = 1;
	while (s[i] == 32 || (9<=s[i] && s[i]<= 13))
		i++;
	if (s[i] == '+' || s[i] == '-')
	{
		if (s[i] == '-')
		{
			sign = -1;
		}
		i++;
	}

	while (s[i] >= '0' && s[i] <= '9')
	{
		r = r*10+s[i]-'0';
		i++;
	}
	return ((int)(r) * sign);
}

int main()
{
	char a[] = "-1231";
	printf("%d\n",ft_atoi(a));
	printf("%d\n",atoi(a));
}

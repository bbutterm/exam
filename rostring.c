#include <unistd.h>
int ft_isspace(char c)
{
	return (c == ' ' || c == '\t');
}

void rostring(char *s)
{
	int i = 0;
	int p = 0;
	int first = 0;
	while (ft_isspace(s[i]))
		i++;
	while (s[i])
	{
		if (!ft_isspace(s[i]) && first == 0)
		{
			while (!ft_isspace(s[i]) && s[i])
			{
				i++;
				first++;
			}
		}
		else
		{
			while (ft_isspace(s[i]))
			{
				i++;
			}
			while (!ft_isspace(s[i]) && s[i])
			{
				write(1,&s[i],1);
				i++;
				p++;
			}
			if (p>0)
			{
				while (ft_isspace(s[i]))
					i++;
				write(1," ",1);
			}
		}
	}
	i = 0;
	while (ft_isspace(s[i]))
		i++;
	while(first > 0)
	{
		write(1,&s[i],1);
		i++;
		first--;
	}
}

int main(int ac, char **av)
{
	if (ac > 1)
		rostring(av[1]);
	write(1,"\n",1);
}

#include <unistd.h>
int ft_isspace(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}
void pword(char *s)
{
	int i = 0;
	while (!ft_isspace(s[i]) && s[i])
	{
		write(1,&s[i],1);
		i++;
	}
}
void rev_wstr(char *s)
{
	int c = 0;
	int i = 0;
	while (s[i])
	{
		i++;
		if (ft_isspace(s[i]))
			c++;
	}
	i--;
	while (c > 0)
	{
		while (!ft_isspace(s[i]))
		{
			i--;
		}
		i++;
		c-=1;
		pword(&s[i]);
		i--;
	}
}
int main(int ac, char **av)
{
	rev_wstr(av[1]);
}

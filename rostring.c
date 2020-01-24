#include <unistd.h>
int ft_isspace(char c)
{
	return (c == ' ' || c == '\t');
}
void rostring(char *s)
{
	int printed = 0;
	int i = 0;
	//skip 1st word
	while (ft_isspace(s[i]))
		i++;
	while (!ft_isspace(s[i]) && s[i])
		i++;
	if (ft_isspace(s[i]) && s[i])
		i++;
	while(s[i])
	{
		if (ft_isspace(s[i]))
		{
			write(1,&s[i],1);
			while(ft_isspace(s[i]))
				i++;
			printed++;
		}
		write(1,&s[i],1);
		i++;
	}
	if (!s[i] && printed > 0)
		write(1," ",1);
	i = 0;
	while (ft_isspace(s[i]) && s[i])
		i++;
	while (!ft_isspace(s[i]) && s[i])
	{
		write(1,&s[i],1);
		i++;
	}
	write(1,"\n",1);
}
int main(int ac, char **av)
{
	if (ac < 2)
		write(1,"\n",1);
	else 
		rostring(av[1]);
}

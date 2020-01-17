#include <unistd.h>
int ft_isspace(char c)
{
	return (c == ' ' || c == '\t');
}
void rostring(char *s)
{
	int i = 0;
	int ros = 0;
	while (s[i])
	{
		while (ft_isspace(s[i]) && ros == 0)
			i++;
		if (ros == 0)
		{	while(s[i] && !ft_isspace(s[i]))
			{
				i++;
				ros++;
			}
		}
		i++;
		while(!ft_isspace(s[i]) && s[i])
		{
			write(1,&s[i],1);
			i++;
		}
		if (ft_isspace(s[i]))
		{
			write(1," ",1);
			while(ft_isspace(s[i]))
				i++;
		}
	}
	i = 0;
	if (ros > 0)
	{
		write(1," ",1);
		while (ros > 0)
		{
			if (ft_isspace(s[i]))
			{
				i++;
				continue;
			}	
			write(1,&s[i],1);
			ros--;
			i++;
		}
	}
}
int main(int ac, char **av)
{
	if (ac > 1 && *av[1])
	{
		rostring(av[1]);
	}
	write(1,"\n",1);
}

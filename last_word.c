/*
 * Write a program that takes a string and displays its last word followed by a \n.
 *
 * A word is a section of string delimited by spaces/tabs or by the start/end of
 * the string.
 *
 * If the number of parameters is not 1, or there are no words, display a newline.
 */
#include <unistd.h>

int	ft_isspace(char c)
{
	if (c == '\t' || c == ' ')
		return 1;
	return 0;
}

int main(int ac, char **av)
{
	int i;
	i = 0;
	if (ac != 2)
	{
		write(1,"\n",1);
		return 0;
	}
	while(av[1][i])
		i++;
	--i;
	while(ft_isspace(av[1][i]) && i!=0)
	{
		i--;
	}
	while(!ft_isspace(av[1][i]) && i!=0)
		i--;
	if (ft_isspace(av[1][i]))
		i++;
	while(av[1][i] && !ft_isspace(av[1][i]))
	{
		write(1,&av[1][i],1);
		i++;
	}
	write(1,"\n",1);
}


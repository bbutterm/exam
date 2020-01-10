/*
 * Write a program that takes two strings and displays, without doubles, the
 * characters that appear in either one of the strings.
 *
 * The display will be in the order characters appear in the command line, and
 * will be followed by a \n.
 *
 * If the number of arguments is not 2, the program displays \n.
 */
#include <unistd.h>

int main(int ac, char **av)
{
	int i;
	int asci[256];
	i = 0;
	if (ac!=3)
	{
		write(1,"\n",1);
		return(0);
	}
	while (av[1][i])
	{
		asci[(int)av[1][i]] = 1;
		i++;
	}
	i = 0;
	while (av[2][i])
	{
		asci[(int)av[2][i]] = 1;
		i++;
	}
	i = 0;
	while (av[1][i])
	{
		if (asci[(int)av[1][i]] == 1)
		{
			write(1,&av[1][i],1);
			asci[(int)av[1][i]] = 2;
		}
		i++;
	}
	i = 0;
	while (av[2][i])
	{
		if (asci[(int)av[2][i]] == 1)
		{
			write(1,&av[2][i],1);
			asci[(int)av[2][i]] = 2;
		}
		i++;
	}
	write(1,"\n",1);
}


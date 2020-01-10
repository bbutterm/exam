/*
 * Write a program called alpha_mirror that takes a string and displays this string
 * after replacing each alphabetical character by the opposite alphabetical
 * character, followed by a newline.
 *
 * 'a' becomes 'z', 'Z' becomes 'A'
 * 'd' becomes 'w', 'M' becomes 'N'
 *
 * and so on.
 *
 * Case is not changed.
 *
 * If the number of arguments is not 1, display only a newline.
 */
#include <unistd.h>
int main(int ac, char **av)
{
	int i;
	i = 0;
	if (ac != 2)
	{
		write(1,"\n",1);
		return 0;
	}
	while (av[1][i])
	{
		if ('A' <= av[1][i] && av[1][i]<= 'Z')
		{
			av[1][i] +=('Z'-av[1][i] - 25+('Z'-av[1][i]));
		}
		if ('a' <= av[1][i] && av[1][i] <= 'z')
		{
			av[1][i] +=('z'-av[1][i] -25+('z'-av[1][i]));
		}
		write(1,&av[1][i],1);
		i++;
	}
	write(1,"\n",1);
}

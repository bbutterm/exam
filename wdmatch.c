/*
 * Write a program that takes two strings and checks whether it's possible to
 * write the first string with characters from the second string, while respecting
 * the order in which these characters appear in the second string.
 *
 * If it's possible, the program displays the string, followed by a \n, otherwise
 * it simply displays a \n.
 *
 * If the number of arguments is not 2, the program displays a \n.
 */
#include <unistd.h>
int main(int ac, char **argv)
{
	int len;
	int i;
	int j;
	i = 0;
	j = 0;
	len = 0;
	if (ac != 3)
	{
		write(1,"\n",1);
		return 0;
	}
	while(argv[1][len])
		len++;
	while (argv[1][i])
	{
		while(argv[2][j])
		{
			if (argv[1][i] == argv[2][j])
			{
				i++;
			}
			else
			{
				j++;
			}
		}
	}
	if (i == len -1)
	{
		i = 0;
		while (i<len -1)
		{
			write(1,&argv[1][i],1);
			i++;
		}
	}
	write(1,"\n",1);
}


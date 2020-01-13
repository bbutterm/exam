/*Write a function that takes an int and converts it to a null-terminated string.
 * The function returns the result in a char array that you must allocate.
 *
 * Your function must be declared as follows:
 *
 * char	*ft_itoa(int nbr);
 */
#include <stdio.h>
#include <stdlib.h>

int ft_strlen(char *s)
{
	int i;
	i = 0;
	while (*s++)
		i++;
	return i;
}
char *ft_strrev(char *s)
{
	char t;
	int i,l;
	i = 0;
	l = ft_strlen(s);
	while (l >i)
	{
		l--;
		t = s[i];
		s[i] = s[l];
		s[l] = t;
		i++;
	}
	return s;
}

char *ft_itoa(int nbr)
{
	int i;
	int sign;
	char *tmp;
	
	i = 0;
	sign = 0;
	tmp = malloc(sizeof(char)*12);
	if (tmp == NULL)
		return NULL;
	if (nbr == 0)
		return 0;
	if (nbr == -2147483648)
		return("-214783648");
	if (nbr < 0)
	{
		sign = 1;
		nbr*= -1;
	}
	while (nbr)
	{
		tmp[i++] = (nbr % 10) + '0';
		nbr /= 10;
	}
	if (sign)
		tmp[i] = '-';
	return ft_strrev(tmp);
}

int	main(void)
{
	int i = 0;
	int tab[5] = {-2147483648, -42, 0, 42, 2147483647};
	while (i < 5)
		printf("%s\n", ft_itoa(tab[i++]));
	return 0;
}

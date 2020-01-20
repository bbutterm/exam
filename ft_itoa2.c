#include <stdlib.h>
int ft_strlen(char *s)
{
	int i = 0;
	while (*s++)
		i++;
	return i;
}
char *ft_strrev(char *s)
{
	int tmp;
	int i = 0;
	int l = ft_strlen(s);
	while (l > i)
	{
		l--;
		tmp = s[i];
		s[i] = s[l];
		s[l] = tmp;
		i++;
	}
	return s;
}
char *ft_itoa(int nbr)
{
	int neg = 0;
	int i = 0;
	char *s = (char *)malloc(sizeof(char) * 13);
	int a = nbr;
	if (nbr < 0)
	{
		nbr*=-1;
		neg = 1;
	}
	if (nbr == 0)
		return (0);
	if (a == -2147483648)
		return ("-2147483648");
	while (nbr)
	{
		s[i] = nbr%10 + '0';
		i+=1;
		nbr/=10;
	}
	if (neg == 1)
		s[i] = '-';
	i++;
	s[i] = '\0';
	return ft_strrev(s);
}

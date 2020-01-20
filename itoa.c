#include <stdlib.h>
#include <stdio.h>
int ft_strlen(char *s)
{
	int i = 0;
	while (s[i] != 0)
		i++;
	return i;
}
char *strrev(char *s)
{
	char tmp;
	int i = 0;
	int l = ft_strlen(s);
	while (i < l)
	{
		l--;
		tmp = s[i];
		s[i] = s[l];
		s[l] = tmp;
		i++;
	}
	return s;
}
char ft_six(long chlen)
{
	if (chlen >= 10)
		return (chlen + '7');
	else
		return (chlen + '0');
}
char *ft_itoa(int nbr, int base)
{
	int neg = 0;
	int i = 0;
	char *ret;
	long num = 0;
	ret =(char *)malloc(sizeof(char) * 13);
	num = nbr;
	if (nbr < 0)
	{
		neg = 1;
		num*=-1;
	}
	if (!num)
		ret[i++] = '0';
	if (base > 10)
	{
		while (num != 0)
		{
			ret[i] = ft_six(num%base);
			num/=base;
			i++;
		}
	}
	while (num != 0)
	{
		ret[i] = num%base + '0';
		i++;
		num/=base;
	}
	if (neg == 1)
		ret[i++] = '-';
	ret[i] = 0;
	return strrev(ret);
}

int main()
{
	printf("%s", ft_itoa(175,3));
}

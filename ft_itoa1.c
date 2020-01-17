#include <stdio.h>
#include <stdlib.h>
int ft_strlen(char *s)
{
	int l = 0;
	while(*s++)
		l++;
	return l;
}
char *ft_strrev(char *s)
{
	char t;
	int i = 0;
	int l = ft_strlen(s);
	while (i < l)
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
	char *s;
	int neg;
	int i = 0;
	if (nbr < 0)
	{
		neg = 1;
		nbr*=-1;
	}
	if (nbr == -2147483648)
		return ("-2147483648");
	if (nbr == 0)
		return NULL;
	s = (char *)malloc(sizeof(char) * 12);
	while (nbr)
	{
		s[i] = (nbr%10) + '0';
		i++;
		nbr/=10;
	}
	if (neg == 1)
	{
		s[i] = '-';
	}
	
	s =  ft_strrev(s);
	i++;
	s[i] = '\0';
	return s;
}

int main()
{
	char s[50] = {"hello"};
	printf("%s",ft_itoa(2147483647));
}

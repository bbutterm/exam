#include <stdlib.h>
int ft_strlen(char *s)
{
	int i = 0;
	while (s[i])
	{
		i++;
	}
	return i;	
}
char *ft_strrev(char *s)
{
	char tmp;
	int i = 0;
	int l;
	l = ft_strlen(s);
	s[l] = '\0';
	while (i<l)
	{
		l--;
		tmp =s[i];
		s[i] = s[l];
		s[l] = tmp;
		i++;
	}
	return s;
}
char *ft_itoa(int a)
{
	char *s;
	int neg,num,i = 0;
	num = a;
	if (a<0)
	{
		neg = 1;
		num = a*-1;
	}
	s = malloc(sizeof(char)*12);
	while (num > 9)
	{
		s[i] = num%10 + '0';
		num/=10;
		i++;
	}
	s[i] = num + '0';
	if (neg == 1)
	{
		s[i+1] = '-';
		i++;
	}
	s[i+2] = '\0';
	return ft_strrev(s);
}

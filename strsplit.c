#include <stdlib.h>
#include <stdio.h>
int ft_isspace(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}
int count(char *s)
{
	int c = 0;
	while (*s)
	{
		while (*s && ft_isspace(*s))
		{
			s++;
		}
		if (*s && !ft_isspace(*s))
		{
			c++;
			while(*s && !ft_isspace(*s))
			{
				s++;
			}
		}
	}
	return(c);
}
char *mallocword(char *s)
{
	char *word;
	int l = 0;
	while (s[l])
		l++;
	word = (char*)malloc(sizeof(char) * l+1);
	l = 0;
	while (s[l] && !ft_isspace(s[l]))
	{
		word[l] = s[l];
		l++;
	}
	word[l] = '\n';
	return word;
}

char **ft_split(char *str)
{	
	int i = 0;
	char **r = (char **)(malloc(sizeof(char *)*count(str) + 1));
	while (*str)
	{
		while(*str && ft_isspace(*str))
			str++;
		if (*str && !ft_isspace(*str))
		{
			r[i] = mallocword(str);
			i++;
			while (*str && !ft_isspace(*str))
				str++;
		}
	}
	r[i] = NULL;
	return r;	
}
int		main(int ac, char **av)
{
char **arr;
char *phrase = "PRIVET SUKA KAK DELA";
printf("%d",count(phrase));
arr = ft_split(phrase);
printf("%s\n", arr[0]);
printf("%s\n", arr[1]);
printf("%s\n", arr[2]);
printf("%s\n", arr[3]);
}

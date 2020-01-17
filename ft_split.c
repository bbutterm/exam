#include <stdio.h>
#include <stdlib.h>
int ft_isspace(char c)
{
	return (c == ' ' || c == '\n' || c == '\t');
}
int count(char *str)
{
	int c,i;

	i = 0;
	c = 0;
	while (*str)
	{
		while (*str && ft_isspace(*str))
			str++;
		if (*str && !ft_isspace(*str))
		{
			c++;
			while (*str && !ft_isspace(*str))
				str++;
		}
	}
	return c;
}
char *mword(char *str)
{
	char *word;
	int i;

	i = 0;
	while (str[i] && !ft_isspace(str[i]))
		i++;
	word = (char *)malloc(sizeof(char) * (i + 1));
	i = 0;
	while (str[i] && !ft_isspace(str[i]))
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}
char **ft_split(char *str)
{
	char **arr = (char **)malloc(sizeof(char *) * (count(str) + 1));

	int i = 0;
	while (*str)
	{
		while (*str && !ft_isspace(*str))
			str++;
		if (*str && !ft_isspace(*str))
		{
			arr[i] = mword(str);
			i++;
			while (*str && !ft_isspace(*str))
				str++;
		}
	}
	arr[i] = NULL;
	return arr;
}
int main()
{
	char **arr;
	char *phrase = "   Hello,   Flavio\t Wuensche!  ";
	arr = ft_split(phrase);
	printf("%s\n", arr[0]);
	printf("%s\n", arr[1]);
	printf("%s\n", arr[2]);
	printf("%s\n", arr[3]);
}

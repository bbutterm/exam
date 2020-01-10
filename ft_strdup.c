/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbutterm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/10 19:36:09 by bbutterm          #+#    #+#             */
/*   Updated: 2020/01/10 19:51:23 by bbutterm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char *ft_strdup(char *src)
{
	char *s;
	int l;
	l = 0;
	while (src[l])
		l++;
	if (!(s = (char *)malloc(l*sizeof(char) + 1)))
		return(0);
	while (l>=0)
	{
		s[l] = src[l];
		l--;
	}
	return(s);
}
int main()
{
	char s[] = "hello";
	printf("%s", ft_strdup(s));
	printf("%s", strdup(s));
}

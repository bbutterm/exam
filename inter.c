/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbutterm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/10 19:58:51 by bbutterm          #+#    #+#             */
/*   Updated: 2020/01/10 20:19:50 by bbutterm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
int main(int argc, char **argv)
{
	int asci[256];
	int i;
	i = 0;

	if (argc != 3)
		write(1,"\n",1);
	while (argv[2][i])
	{
		asci[argv[2][i]] = 1;
		i++;
	}
	i = 0;
	while (argv[1][i])
	{
		if (asci[argv[1][i]] == 1)
		{
			write(1,&argv[1][i],1);
			asci[argv[1][i]] = 2;
		}
		i++;
	}
}

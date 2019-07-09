/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anekhaen <anekhaen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/01 18:38:45 by anekhaen          #+#    #+#             */
/*   Updated: 2019/07/01 19:42:30 by anekhaen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

int	main(int	argc, char	**argv)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (argc == 2)
	{
		while (argv[1][i] )
			i++;
		while (argv[1][i-1] == ' ')
			i--;
		j = i - 1;
		while ( i > 0 && argv[1][i-1] != ' ')
			i--;
		while (i <= j)
		{
			write (1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anekhaen <anekhaen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/05 16:03:56 by anekhaen          #+#    #+#             */
/*   Updated: 2019/07/05 16:16:43 by anekhaen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char *argv[])
{
	int		i;
	char	ltr;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			ltr = argv[1][i];
			if ( argv[1][i] >= 'A' && argv[1][i] <= 'Z')
				ltr = 'Z' - argv[1][i] + 'A';
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
			   	ltr = 'z' - argv[1][i] + 'a';
			write(1, &ltr, 1);
			i += 1;
		}
	}
	write(1, "\n", 1);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anekhaen <anekhaen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/30 12:43:24 by anekhaen          #+#    #+#             */
/*   Updated: 2019/08/30 13:01:35 by anekhaen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rstr_capitalizer(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && 'Z' >= str[i])
			str[i] += 32;
		if ((str[i] >= 'a' && 'z' >= str[i]) && (str[i + 1] == ' ' || \
			str[i + 1] == '\t' || str[i + 1] == '\0'))
			str[i] -= 32;
		write(1, &str[i++], 1);
	}
}

int		main(int argc, char **argv)
{
	int		i;

	if (argc < 2)
		write (1, "\n", 1);
	else
	{
		i = 1;
		while (i < argc)
		{
			rstr_capitalizer(argv[i]);
			write(1, "\n", 1);
			i += 1;
		}
	}
	return (0);
}

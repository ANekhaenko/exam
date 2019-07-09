/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anekhaen <anekhaen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/05 15:18:10 by anekhaen          #+#    #+#             */
/*   Updated: 2019/07/05 15:51:58 by anekhaen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int main(int argc, char **argv)
{
	int i;
	int symbol[127] = {0};

	i = 0;
	if (argc == 3)
	{
		while(argv[1][i] != '\0')
		{
			if (symbol[(int)argv[1][i]] == 0)
			{
				symbol[(int)argv[1][i]] = 1;
				write(1, &argv[1][i], 1);
			}
			i++;
		}
		i = 0;
		while(argv[2][i] != '\0')
		{
			if (symbol[(int)argv[2][i]] == 0)
			{
				symbol[(int)argv[2][i]] = 1;
				write(1, &argv[2][i], 1);
			}
			i++;
		}
	}
	write (1, "\n", 1);
}

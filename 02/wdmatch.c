/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anekhaen <anekhaen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/06 16:29:07 by anekhaen          #+#    #+#             */
/*   Updated: 2019/07/06 17:17:11 by anekhaen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int main(int argc, char **argv)
{
	int i,col;

	i = 0;
	col = 0;
	if (argc == 3)
	{
		while (argv[1][i])
		{
			while (*argv[2])
			{
				if (*argv[2] == argv[1][i])
				{
					col++;
					argv[2]++;
					break;
				}
				argv[2]++;
			}
		i++;
		}
	}
	if (i == col)
	write(1, argv[1], i);
	write (1, "\n",1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anekhaen <anekhaen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 19:40:05 by anekhaen          #+#    #+#             */
/*   Updated: 2019/07/08 20:33:31 by anekhaen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int main (int argc, char **argv)
{
	if (argc == 2)
	{
		while (*argv[1] == ' ')
			argv[1]++;
		while(*argv[1])
		{
			if ((*argv[1] == ' ' && argv[1][1] == ' ' ) || argv[1][1] == '\0')
				argv[1]++;
			else
			{
				write(1, argv[1], 1);
				argv[1]++;
			}
		}
	}
	write(1, "\n", 1);
}
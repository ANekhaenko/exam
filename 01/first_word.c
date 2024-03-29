/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anekhaen <anekhaen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/26 22:10:15 by anekhaen          #+#    #+#             */
/*   Updated: 2019/06/26 22:38:35 by anekhaen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		while (*argv[1] == ' ' || *argv[1] == '\t')
			argv[1]++;
		while (*argv[1] && *argv[1] != ' ' )
			write(1, argv[1]++, 1);
	}
	write(1, "\n", 1);
}

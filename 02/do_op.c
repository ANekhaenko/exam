/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anekhaen <anekhaen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/06 19:11:32 by anekhaen          #+#    #+#             */
/*   Updated: 2019/07/06 19:26:25 by anekhaen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		main(int argc, char **argv)
{
	if (argc == 4)
	{
		if (*argv[2] == '+')
			printf("%d", atoi(argv[1]) + atoi(argv[3]));
		if (*argv[2] == '-')
			printf("%d", atoi(argv[1]) - atoi(argv[3]));
		if (*argv[2] == '*')
			printf("%d", atoi(argv[1]) * atoi(argv[3]));
		if (*argv[2] == '/')
			printf("%d", atoi(argv[1]) / atoi(argv[3]));
		if (*argv[2] == '%')
			printf("%d", atoi(argv[1]) % atoi(argv[3]));
	}
	printf("\n");
	return(0);
}

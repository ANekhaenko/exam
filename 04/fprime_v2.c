/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime_v2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anekhaen <anekhaen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/28 17:24:33 by anekhaen          #+#    #+#             */
/*   Updated: 2019/08/28 17:43:55 by anekhaen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>

void	fn_fact(unsigned int num)
{
	unsigned int fact;

	fact = 2;
	if (num == 1)
		printf("1");
	else
	{
		while (num > 1)
		{
			if (num % fact == 0)
			{
				printf("%d",fact);
				num /= fact;
				if (num > 1)
					printf("*");
				fact--;
			}
			fact++;
		}
	}

}

int		main(int argc, char **argv)
{
	if (argc == 2 && *argv[1])
		fn_fact(atoi(argv[1]));
	printf("\n");
	return(0);
}

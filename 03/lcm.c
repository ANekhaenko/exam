/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anekhaen <anekhaen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/02 11:58:43 by anekhaen          #+#    #+#             */
/*   Updated: 2019/07/08 15:48:16 by anekhaen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

unsigned int	lcm2(unsigned int a, unsigned int b)
{
	unsigned int temp;

	temp = a;
	if (a == 0 || b == 0)
		return(0);
	while (a % b != 0)
		a += temp;
	return(a);
}

int main(void)
{
	printf("lcm_2 = %d\n", lcm2(8,12));
}

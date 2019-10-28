/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anekhaen <anekhaen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/06 20:39:57 by anekhaen          #+#    #+#             */
/*   Updated: 2019/09/03 15:20:54 by anekhaen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		is_power_of_2(unsigned int n)
{
	if (n == 0)
		return (0);
	while (n % 2 == 0)
		n /= 2;
	return ((n == 1) ? 1 : 0);
}

int		is_power_of_2_v2(unsigned int n)
{

	return (!(n & n - 1 || !n ));
}
int main(void)
{
	printf("n = %d\n", is_power_of_2_v2(1));
}

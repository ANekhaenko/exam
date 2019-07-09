/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anekhaen <anekhaen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/27 00:54:24 by anekhaen          #+#    #+#             */
/*   Updated: 2019/07/01 22:54:04 by anekhaen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_atoi(char *s)
{
	int		sign;
	int		res;

	sign = 1;
	res = 0;

	while (*s == 32 || (*s >= 9 && *s <= 13))
		s++;
	if (*s == '-')
	{
		sign = -1;
		s++;
	}
	else if (*s == '+')
		s++;
	while (*s >= '0' && *s <= '9')
		res = res * 10 + (*s++ - '0');
	return (res = res * sign);
}

int		main(void)
{
	char abc[] = "    \n\n\v\f\r\t +-5234AAAgreghrsth";

	printf("%d\n", ft_atoi(abc));
}

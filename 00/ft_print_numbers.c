/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anekhaen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/05 19:04:05 by anekhaen          #+#    #+#             */
/*   Updated: 2019/05/05 19:08:21 by anekhaen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_numbers(void)
{
	write(1, "0123456789", 10);
}
int main()
{
	return(0);
}

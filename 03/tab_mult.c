/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anekhaen <anekhaen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/28 09:40:55 by anekhaen          #+#    #+#             */
/*   Updated: 2019/08/28 19:44:33 by anekhaen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putnbr(int n)
{
	if (n > 9)
		ft_putnbr(n / 10);
	n = n % 10 + '0';
	write(1, &n, 1);
}

int main (int argc, char **argv)
{
	int	n;
	int atoi;
	int res;

	atoi = 0;
	n = 0;
	res = 0;
	if (argc == 2)
	{
		while (*argv[1] >= '0' && *argv[1] <= '9')
			atoi = atoi * 10 + *argv[1]++ - '0';
		while(n++ != 9)
		{
			ft_putnbr(n);
			write(1, " x ", 3);
			ft_putnbr(atoi);
			write(1, " = ", 3);
			res = n * atoi;
			ft_putnbr(res);
			write(1,"\n",1);
		}
	}
	else
		write(1,"\n",1);
}

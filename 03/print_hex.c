/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anekhaen <anekhaen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/31 19:29:54 by anekhaen          #+#    #+#             */
/*   Updated: 2019/08/31 19:39:24 by anekhaen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_atoi(char *s)
{
	int	r;

	//while (*s == 32 || (*s >= 9 && *s <= 13))
	//	s++;
	//sign = (*s == '-') ? -1 : 1;
	//(*s == '-' || *s == '+') ? s++ : s;
	r = 0;
	while (*s >= '0' && *s <= '9')
		r = r * 10 + *s++ - '0';
	return (r);
}

void	print_hex(int n)
{
	if (n >= 16)
		print_hex(n / 16);
	n = n % 16;

	if (n < 10)
		n = n + 48;
	else
		n = n + ('a' - 10);
	// n += n < 10 ? '0' : 'a' - 10;
	write(1, &n, 1);
}

int		main(int ac, char **av)
{
	if (ac == 2)
		print_hex(ft_atoi(av[1]));
	write(1, "\n", 1);
	return (1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anekhaen <anekhaen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 16:21:04 by anekhaen          #+#    #+#             */
/*   Updated: 2019/07/08 17:48:24 by anekhaen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int is_it_prime(int n)
{
	int i;

	i = 2;
	while (n > i)
		if (!(n % i++))
			return (0);
	return (1);
}

void putnbr(int n)
{
	char c;

	if (n > 9)
		putnbr (n / 10);
	c = n % 10 + '0';
	write (1, &c, 1);
}

int mini_atoi(char *s)
{
	int res;

	res = 0;
	while (*s >= '0' && *s <= '9')
		res = res * 10 + *s++ - '0';
	return(res);
}

void prime_sum(int n)
{
	int i;
	int count;

	count = 0;
	if (n == 1)
		count = n;
	i = 1;
	while (++i <= n)
		if (is_it_prime(i))
			count += i;
	putnbr(count);
}

int main(int argc, char **argv)
{
	if (argc == 2 && mini_atoi(argv[1]) > 0)
		prime_sum(mini_atoi(argv[1]));
	else
		write(1, "0", 1);
	write (1, "\n", 1);
	return(0);
}

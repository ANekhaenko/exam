/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anekhaen <anekhaen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/01 16:17:36 by anekhaen          #+#    #+#             */
/*   Updated: 2019/07/01 18:33:51 by anekhaen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdio.h>

size_t	ft_strspn(const char *s, const char *charset)
{
	int		i;
	int		j;
	size_t	res;

	i = 0;
	j = 0;
	res = 0;
	while (s[i])
	{
		while (charset[j])
		{
			if (s[i] == charset[j])
			{
				res++;
				break ;
			}
			j++;
		}
		i++;
	}
	return (res);
}

int	main(int argc, char **argv)
{
	printf("ft_strspn = %lu\n", ft_strspn(argv[1], argv[2]));
	printf("   strspn = %lu\n", strspn(argv[1], argv[2]));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcmp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anekhaen <anekhaen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/06 19:31:10 by anekhaen          #+#    #+#             */
/*   Updated: 2019/07/06 19:41:41 by anekhaen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1 && *s2 )
		{
			s1++;
			s2++;
		}
	return (*s1 - *s2);
}

#include<stdio.h>
#include<string.h>

int main(void)
{
	printf("ft_strcmp = %d\n", ft_strcmp("zbaaaaaa","zbaa"));
	printf("   strcmp = %d\n", strcmp("zbaaaaaa","zbaa"));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anekhaen <anekhaen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/26 16:46:22 by anekhaen          #+#    #+#             */
/*   Updated: 2019/06/26 16:53:41 by anekhaen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *ft_strcpy(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i])
	{
		s1[i] = s2[i];
		i++;
	}
	return (s1);
}

#include<stdio.h>

int main(void)
{
	char m1[] = "Papa";
	printf("m1 = %s\n", m1);
	char m2[] = "Mama";
	ft_strcpy(m1,m2);
	printf("m1 = %s\n", m1);
	return (0);
}

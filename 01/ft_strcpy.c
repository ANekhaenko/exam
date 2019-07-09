/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anekhaen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/06 18:07:59 by anekhaen          #+#    #+#             */
/*   Updated: 2019/05/06 23:28:54 by anekhaen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void   ft_strcpy(char *s1, char *s2)
{
	int i = 0;
	
	while (s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	return;
}

#include <stdio.h>

int main(void)
{
	char str1[] = "abc";
	char str2[] = "xyzad";

    char  *ptr;
	ptr = &str1[0];

	printf("str1 = %s\n", str1);
	ft_strcpy(str1, str2);
	printf("str1 = %s\n", str1);
	printf("adres str1 4erez ukazatel = %p\n", ptr);
	printf("adres str1 4erez= %p\n", &str1[0]);
	return (0);
}

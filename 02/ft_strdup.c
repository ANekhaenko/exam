/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anekhaen <anekhaen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/27 19:51:59 by anekhaen          #+#    #+#             */
/*   Updated: 2019/06/27 22:27:43 by anekhaen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strdup(char *src)
{
	int	len;
	char *newstr;

	len = 0;
	while (src[len])
		len++;

	if (!(newstr = (char *)malloc(sizeof(char) * len)))
		return (NULL);
	//src[len] = '\0';
	while (len--)
		newstr[len] = src[len];
	return (newstr);
}

int main(void)
{
	char a[] = "lala";
	char *b;
	b = ft_strdup(a);
	write(1, a, 4);
	write(1, "\n", 1);
	write(1, b, 4);
	write(1, "\n", 1);
	return (0);
}

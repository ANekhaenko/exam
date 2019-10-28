/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anekhaen <anekhaen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 22:21:02 by anekhaen          #+#    #+#             */
/*   Updated: 2019/09/23 22:52:32 by anekhaen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

size_t	ft_strspn(const char *s, const char *accept)
{
	size_t i = 0;
    size_t j = 0;
    
	while (*s)
	{   
        while(accept[j])
        {
		    if (accept[j] == *s)
            {   
                ++i;
                j = 0;
	    		break;
            }
            j++;
        }
		++s;
	}
	return (i);
}

 int	main(void)
 {
 	char haystack[] = "aTahis is a test string";
 	char accept[] = "qwasihTaA ";
    printf("%zu\n", strspn(haystack, accept));
 	printf("%zu\n", ft_strspn(haystack, accept));
 }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anekhaen <anekhaen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 21:38:47 by anekhaen          #+#    #+#             */
/*   Updated: 2019/09/10 13:46:51 by anekhaen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int start, int end)
{
	int		*range;
	int		i;

	if (start > end)
		range = (int *)malloc(sizeof(int) * (start - end) + 1);
	else
		range = (int *)malloc(sizeof(int) * (end - start) + 1);
	i = 0;
	while (start != end)
	{
		range[i++] = start;
		start += (start > end) ? -1 : 1;
	}
	range[i] = start;
	return (range);
}

int     *ft_range2(int start, int end)
{
    int     *array;
    int     size;

    if (start > end)
        size = (start - end);
    else
        size = (end - start);
    array = (int *)malloc(sizeof(int) * (size + 1));
    if (end > start)
    {
        while ( end >= start)
        {
            array[size] = end;
            end--;
            size--;
        }
    }
    else
    {
        while ( start >= end)
        {
            array[size] = end;
           // if (end == 2147483647)
              //  break;
            end++;
            size--;
        }
    }
return(array);
}

int	main(int ac, char **av)
{
	int *p = ft_range(2147483647, 2147483640);
	int *p2 = ft_range2(2147483647, 2147483640);
	printf("|%d|", p[0]);
	printf("%d|", p[1]);
	printf("%d|", p[2]);
	printf("%d|", p[3]);
	return (1);
}

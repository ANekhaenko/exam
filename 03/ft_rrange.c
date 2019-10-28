/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/27 09:46:12 by exam              #+#    #+#             */
/*   Updated: 2019/08/27 09:46:15 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int     *ft_rrange(int start, int end)
{
    int *array;
    int size_ar;

    size_ar = 0;
    if (start > end)
        size_ar = start - end + 1;
    else if (end > start)
        size_ar = end - start + 1;
    else if (start == 0 && end == 0)
        {
            array = malloc(sizeof(int) * 1);
            array[0] = 0;
            return(array);
        }
    array = malloc(sizeof(int) * size_ar);
    size_ar--;
    while(size_ar >= 0)
    {
        array[size_ar] = start;
        if (start < end)
            start++;
        else
            start--;
        size_ar--;
    }
    return(array);
}
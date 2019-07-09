/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anekhaen <anekhaen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/06 15:29:43 by anekhaen          #+#    #+#             */
/*   Updated: 2019/07/06 16:02:45 by anekhaen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		max(int* tab, unsigned int len)
{
	int max;

	if (!tab || !len)
		return(0);
	max = tab[len-1];
	while(len--)
	{
		if (tab[len] > max)
		max = tab[len];
	}
	return(max);
}

#include<stdio.h>
int main(void)
{
	int mas[] = {0};
	printf("max = %d\n",max(mas,6));
}

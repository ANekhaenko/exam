/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anekhaen <anekhaen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/26 19:58:19 by anekhaen          #+#    #+#             */
/*   Updated: 2019/08/26 20:33:59 by anekhaen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int main(int argc, char **argv)
{
	int res;
	int i;

	i = 0;
	res = 0;
	if ( argc == 3)
	{
		while (argv[1][i])
		{
				while (*argv[2])
				{
					if (argv[1][i] == *argv[2])
					{
						res++;
						break;
					}
				argv[2]++;
				}
			i++;
		}
	}
	else
		return (write (1,"\n",1));
	return ((res == i && res != 0) ?  write (1,"1\n",2) : write (1,"0\n",2) );
}

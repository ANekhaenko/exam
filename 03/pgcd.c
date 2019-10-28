/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anekhaen <anekhaen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 17:37:32 by anekhaen          #+#    #+#             */
/*   Updated: 2019/07/16 17:51:52 by anekhaen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>

int pgcd(unsigned int n, unsigned int n2)
{
    int i;

    i = n;
    while(i > 0)
    {
        if ((n % i == 0) && (n2 % i == 0))
            return(i);
        i--;
    }
    return(1);
}

int main(int argc, char **argv)
{
    if (argc == 3)
    {
        printf("%d", pgcd(atoi(argv[1]), atoi(argv[2])));
    }
    printf("\n");
    return(0);
}
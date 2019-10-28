/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anekhaen <anekhaen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/27 23:40:44 by anekhaen          #+#    #+#             */
/*   Updated: 2019/07/05 15:50:09 by anekhaen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int main(int argc, char **argv)
{
    int i;
    int simbol[127] = {0};

    i = 0;
    if (argc == 3)
    {
        while(argv[2][i] != '\0')
        {
            if (simbol[(int)argv[2][i]] == 0)
                simbol[(int)argv[2][i]] = 1;
            i++;
        }
        i = 0;
        while (argv[1][i] != '\0')
        {
            if (simbol[(int)argv[1][i]] == 1)
            {
                simbol[(int)argv[1][i]] = 2;
                write(1, &argv[1][i], 1);
            }
        i++;
        }
    }
    write(1, "\n", 1);
}


#include <unistd.h>

int main(int argc, char **argv)
{
    int simbol[127] = {0};

    if (argc == 3)
    {
        while(*argv[2])
        {
            if (simbol[*argv[2]] == 0)
                simbol[*argv[2]] = 1;
            argv[2]++;
        }
        while (*argv[1])
        {
            if (simbol[*argv[1]] == 1)
            {
                simbol[*argv[1]] = 2;
                write(1, argv[1], 1);
            }
        argv[1]++;
        }
    }
    write(1, "\n", 1);
}

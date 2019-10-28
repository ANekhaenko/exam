/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anekhaen <anekhaen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/27 11:11:35 by exam              #+#    #+#             */
/*   Updated: 2019/08/27 17:54:53 by anekhaen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdlib.h>

int main (int argc, char **argv)
{
    int checker_only_one;
    int first_word_start;
    int first_word_end;
    int i;

    i = 0;
    first_word_start = 0;
    first_word_end = 0;
    checker_only_one = 0;
    if (argc > 1)
    {
        while (argv[1][i] == ' ' || argv[1][i] == '\t')
        {
            i++;
            first_word_start = i;
        }
        while (argv[1][i] != ' ' && argv[1][i] != '\t'  && argv[1][i])
        {
            i++;
            first_word_end = i;
        }
        if (argv[1][i] == '\0')
            checker_only_one = 1;
        while(argv[1][i])
        {
            if (argv[1][i] == ' ' && argv[1][i] == '\t')
                checker_only_one = 1;
            i++;
        }
        i = first_word_end;
        if (checker_only_one == 0)
        {
            while (argv[1][i] == ' ' || argv[1][i] == '\t')
                i++;
            while(argv[1][i])
            {
                if ( (argv[1][i] == ' ' && argv[1][i+1] == ' ') || (argv[1][i] == '\t' && argv[1][i+1] == '\t'))
                    i++;
                else
                {
                    write(1, &argv[1][i], 1);
                    i++;
                }
            }
            if (checker_only_one == 0)
                write(1, " ", 1);
            while (first_word_start < first_word_end)
            {
                write(1, &argv[1][first_word_start], 1);
                first_word_start++;
            }
        }
        else
            while (first_word_start < first_word_end)
            {
                write(1, &argv[1][first_word_start], 1);
                first_word_start++;
            }
    }
    write(1,"\n",1);
}

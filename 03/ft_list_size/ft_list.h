/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anekhaen <anekhaen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 21:24:03 by anekhaen          #+#    #+#             */
/*   Updated: 2019/07/08 21:26:01 by anekhaen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LISH_H
#define Ft_LIST_H

typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;

int	ft_list_size(t_list *begin_list);

#endif

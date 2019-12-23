/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   command_end_pb.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleonard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 18:17:08 by eleonard          #+#    #+#             */
/*   Updated: 2019/11/04 18:17:09 by eleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	command_end_pb(t_ps *s, int pushed_nbr)
{
	remove_elem(s->first->sorted_tab, pushed_nbr, s->first->len);
	insert_elem(s->second->sorted_tab, pushed_nbr, s->second->len);
	command_end_other(s);
}

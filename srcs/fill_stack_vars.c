/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_stack_vars.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleonard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 18:16:53 by eleonard          #+#    #+#             */
/*   Updated: 2019/11/04 18:16:54 by eleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	fill_stack_vars(t_stack_vars *s, char *seq)
{
	int				i;

	get_cur_tab(s);
	i = 0;
	while (i < s->len)
	{
		s->sorted_tab[i] = s->cur_tab[i];
		i++;
	}
	array_sort(s->sorted_tab, s->len, seq);
	get_cur_offset(s);
}

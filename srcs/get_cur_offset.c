/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_cur_offset.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleonard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 18:22:20 by eleonard          #+#    #+#             */
/*   Updated: 2019/11/04 18:22:21 by eleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	find_value_and_calculate_offset(t_stack_vars *s, int value, int id)
{
	int i;

	i = 0;
	while (i < s->len)
	{
		if (s->sorted_tab[i] == value)
			break ;
		i++;
	}
	return (abs(id - i));
}

void		get_cur_offset(t_stack_vars *s)
{
	int i;
	int value;
	int modulo;

	i = 0;
	s->offset_count = 0;
	while (i < s->len)
	{
		value = s->cur_tab[i];
		s->cur_offset[i] = find_value_and_calculate_offset(s, value, i);
		modulo = abs(s->cur_offset[i]);
		s->offset_count += modulo;
		i++;
	}
}

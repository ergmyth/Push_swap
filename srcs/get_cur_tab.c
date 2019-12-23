/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_cur_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleonard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 18:21:08 by eleonard          #+#    #+#             */
/*   Updated: 2019/11/04 18:21:09 by eleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		get_cur_tab(t_stack_vars *s)
{
	int		i;
	t_stack	*elem;

	i = 0;
	s->max = -2147483648;
	elem = s->stack->next;
	while (i < s->len)
	{
		s->cur_tab[i] = elem->n;
		if (s->max < s->cur_tab[i])
			s->max = s->cur_tab[i];
		elem = elem->next;
		i++;
	}
}

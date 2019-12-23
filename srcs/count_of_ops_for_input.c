/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_of_ops_for_input.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleonard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 18:16:35 by eleonard          #+#    #+#             */
/*   Updated: 2019/11/04 18:16:36 by eleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	def_a(t_ps *s, int b)
{
	int a;
	int a_end;

	a = 0;
	a_end = 0;
	while (a < s->first->len && s->first->cur_tab[a] < s->second->cur_tab[b])
		a++;
	if (a == 0 && s->second->cur_tab[b] < s->first->cur_tab[s->first->len - 1]
			&& s->first->cur_tab[s->first->len - 1] != s->first->max)
	{
		a = s->first->len - 1;
		while (s->second->cur_tab[b] < s->first->cur_tab[a - a_end] &&
				s->first->cur_tab[a - a_end] != s->first->max)
			a_end++;
		a = s->first->len - a_end;
	}
	return (a);
}

void		count_of_ops_for_input(t_ps *s, int *a_ret, int *b_ret)
{
	int a;
	int b;
	int min;
	int a_end;
	int b_end;

	b = 0;
	min = s->len * s->len;
	while (b < s->second->len)
	{
		a = def_a(s, b);
		a_end = a;
		b_end = b;
		a_end = (a_end >= s->first->mid) ? s->first->len - a_end : a_end;
		b_end = (b_end >= s->second->mid) ? s->second->len - b_end : b_end;
		if (min > a_end + b_end)
		{
			min = a_end + b_end;
			*a_ret = a;
			*b_ret = b;
		}
		b++;
	}
	if (min == s->len * s->len && (*a_ret = a))
		*b_ret = b;
}

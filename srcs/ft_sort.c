/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleonard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 18:21:28 by eleonard          #+#    #+#             */
/*   Updated: 2019/11/04 18:21:29 by eleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rrr_case(t_ps *s, int a, int b)
{
	a = s->first->len - a;
	b = s->second->len - b;
	while (a && b && a-- && b--)
		s->op += func_rrr(s);
	while (a && a--)
		s->op += func_rra(s);
	while (b && b--)
		s->op += func_rrb(s);
}

static void	rr_case(t_ps *s, int a, int b)
{
	while (a && b && a-- && b--)
		s->op += func_rr(s);
	while (a && a--)
		s->op += func_ra(s);
	while (b && b--)
		s->op += func_rb(s);
}

static void	rrb_ra_case(t_ps *s, int a, int b)
{
	b = s->second->len - b;
	while (b && b--)
		s->op += func_rrb(s);
	while (a && a--)
		s->op += func_ra(s);
}

static void	rra_rb_case(t_ps *s, int a, int b)
{
	a = s->first->len - a;
	while (a && a--)
		s->op += func_rra(s);
	while (b && b--)
		s->op += func_rb(s);
}

void		ft_sort(t_ps *s, int last)
{
	int	a;
	int	b;

	pre_sort_a(s, last);
	while (s->second->len)
	{
		count_of_ops_for_input(s, &a, &b);
		if (a >= s->first->mid && b >= s->second->mid)
			rrr_case(s, a, b);
		else if (a >= s->first->mid && b < s->second->mid)
			rra_rb_case(s, a, b);
		else if (a < s->first->mid && b >= s->second->mid)
			rrb_ra_case(s, a, b);
		else
			rr_case(s, a, b);
		s->op += func_pa(s);
		get_cur_tab(s->first);
		get_cur_tab(s->second);
	}
	while (!is_sorted(s->first, 'a'))
		s->op += func_rra(s);
}

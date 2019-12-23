/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_best_solution.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleonard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 12:49:08 by eleonard          #+#    #+#             */
/*   Updated: 2019/11/04 18:17:54 by eleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	check_offset(int *offset, int len, int *cur)
{
	int i;

	i = 0;
	while (i < len)
	{
		if (len - i - 1 > 0 && offset[i] == offset[len - i - 1] &&
			(offset[i] != 0 || i == len - i - 1))
			i++;
		else
			return (0);
		if (cur[i - 1] < cur[i])
			return (0);
	}
	return (1);
}

static void	handle_special_case(t_ps *s)
{
	int	pushed_nbr;

	if (check_offset(s->first->cur_offset, s->first->len, s->first->cur_tab))
		while (s->first->len > 3)
		{
			s->op += func_rra(s);
			command_end_other(s);
			pushed_nbr = s->first->cur_tab[0];
			s->op += func_pb(s);
			command_end_pb(s, pushed_nbr);
		}
	s->op += func_ra(s);
	s->op += func_sa(s);
	while (s->second->len-- >= 0)
		s->op += func_pa(s);
}

void		find_solution(t_ps *s)
{
	if (is_sorted(s->first, 'a'))
		return ;
	s->op = 0;
	if (check_offset(s->first->cur_offset, s->first->len, s->first->cur_tab))
		handle_special_case(s);
	else
		ft_sort(s, -1);
}

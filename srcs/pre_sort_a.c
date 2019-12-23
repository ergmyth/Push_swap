/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pre_sort_a.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleonard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 18:13:20 by eleonard          #+#    #+#             */
/*   Updated: 2019/11/04 18:13:21 by eleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	positive_min(int *tab, int size, int min, char c)
{
	int	i;
	int ind;

	ind = -1;
	i = 0;
	while (i < size)
	{
		if (tab[i] >= 0)
		{
			if (c == 'a')
			{
				if (min > tab[i] && (ind = i) >= 0)
					min = tab[i];
			}
			else
			{
				if (min >= tab[i] && (ind = i) >= 0)
					min = tab[i];
			}
		}
		i++;
	}
	return (ind);
}

static void	def_best_command(t_ps *s)
{
	int	i;
	int	ret;
	int	offset_sum;

	i = 0;
	s->print = 0;
	s->func_size = (s->len >= 50 && s->len <= 200) ? 3 : 9;
	while (i < s->func_size)
	{
		offset_sum = -1;
		ret = s->func[i].func(s);
		if (ret)
		{
			command_end_other(s);
			offset_sum = s->first->offset_count + s->second->offset_count;
			s->commands_offset[i] = offset_sum;
			s->func[def_rev_a(i, s)].func(s);
			command_end_other(s);
		}
		else
			s->commands_offset[i] = offset_sum;
		i++;
	}
}

void		pre_sort_a(t_ps *s, int last)
{
	int		offset_sum;
	int		num;

	while (!is_sorted(s->first, 'a'))
	{
		def_best_command(s);
		offset_sum = s->first->offset_count + s->second->offset_count;
		s->print = 1;
		if (last >= 0)
			rem_commands(s, last);
		num = positive_min(s->commands_offset, s->func_size, offset_sum, 'a');
		if (num == -1)
		{
			last = s->first->cur_tab[0];
			s->op += func_pb(s);
			command_end_pb(s, last);
			last = 9;
		}
		else
		{
			s->op += s->func[num].func(s);
			command_end_other(s);
			last = num;
		}
	}
}

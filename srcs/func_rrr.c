/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func_rrr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleonard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 16:30:43 by eleonard          #+#    #+#             */
/*   Updated: 2019/10/24 16:30:44 by eleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		func_rrr(t_ps *s)
{
	int res;

	if (s->print == 1)
	{
		s->print = 0;
		res = rev_ro_lst(&s->first->stack) + rev_ro_lst(&s->second->stack);
		res = (res > 0) ? 1 : 0;
		s->print = 1;
		if (s->print && res)
			write(1, "rrr\n", 4);
	}
	else
	{
		res = rev_ro_lst(&s->first->stack) + rev_ro_lst(&s->second->stack);
		res = (res > 0) ? 1 : 0;
	}
	return (res);
}

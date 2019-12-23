/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func_arr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleonard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 18:23:45 by eleonard          #+#    #+#             */
/*   Updated: 2019/11/04 18:23:46 by eleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	func(t_ps *s, int i, char *str, int (*f)(t_ps *))
{
	s->func[i].name = str;
	s->func[i].func = (void*)f;
}

void		func_arr(t_ps *s)
{
	func(s, 0, "ra", func_ra);
	func(s, 1, "rra", func_rra);
	func(s, 2, "sa", func_sa);
	func(s, 3, "rb", func_rb);
	func(s, 4, "rrb", func_rrb);
	func(s, 5, "sb", func_sb);
	func(s, 6, "ss", func_ss);
	func(s, 7, "rr", func_rr);
	func(s, 8, "rrr", func_rrr);
	func(s, 9, "pb", func_pb);
	func(s, 10, "pa", func_pa);
}

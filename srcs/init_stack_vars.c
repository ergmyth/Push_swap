/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stack_vars.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleonard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 18:15:59 by eleonard          #+#    #+#             */
/*   Updated: 2019/11/04 18:16:15 by eleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack_vars	*init_stack_vars(int len)
{
	t_stack_vars	*s_stack;

	s_stack = (t_stack_vars*)malloc(sizeof(t_stack_vars));
	if (!s_stack)
		case_of_error();
	s_stack->stack = new_elem(0, 1);
	s_stack->len = len;
	s_stack->mid = s_stack->len / 2;
	if (!(s_stack->cur_tab = (int*)malloc(sizeof(int) * len)))
		case_of_error();
	if (!(s_stack->sorted_tab = (int*)malloc(sizeof(int) * len)))
		case_of_error();
	if (!(s_stack->cur_offset = (int*)malloc(sizeof(int) * len)))
		case_of_error();
	return (s_stack);
}

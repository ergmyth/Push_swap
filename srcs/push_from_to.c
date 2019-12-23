/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_elems.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleonard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 16:22:16 by eleonard          #+#    #+#             */
/*   Updated: 2019/10/24 16:22:24 by eleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		push_from_to(t_stack_vars *vars1, t_stack_vars *vars2)
{
	t_stack	*start;
	t_stack	*elem;

	start = vars1->stack->next;
	if (start)
	{
		vars1->len--;
		vars2->len++;
		vars1->mid = vars1->len / 2;
		vars2->mid = vars2->len / 2;
		elem = start->next;
		add_to_stack(&vars2->stack, start);
		vars1->stack->next = elem;
		return (1);
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleonard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 12:56:24 by eleonard          #+#    #+#             */
/*   Updated: 2019/10/25 12:56:25 by eleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(t_stack_vars *s, char c)
{
	t_stack	*stack;

	stack = s->stack->next;
	if (c == 'a' && stack)
	{
		while (stack->next)
		{
			if (stack->n > stack->next->n)
				return (0);
			stack = stack->next;
		}
		return (1);
	}
	else if (stack)
		while (stack->next)
		{
			if (stack->n < stack->next->n)
				return (0);
			stack = stack->next;
		}
	return (1);
}

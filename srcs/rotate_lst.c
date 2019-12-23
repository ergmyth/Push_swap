/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_lst.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleonard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 16:22:16 by eleonard          #+#    #+#             */
/*   Updated: 2019/10/24 16:22:24 by eleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		rotate_lst(t_stack **stack)
{
	t_stack	*start;
	t_stack	*elem;

	start = (*stack)->next;
	if (start && start->next)
	{
		elem = start;
		(*stack)->next = start->next;
		while (start->next)
			start = start->next;
		start->next = elem;
		elem->next = NULL;
		return (1);
	}
	return (0);
}

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

int		swap_elems(t_stack **stack)
{
	t_stack *elem1;
	t_stack *elem2;
	t_stack	*start;

	start = (*stack)->next;
	if (start && start->next)
	{
		elem1 = start;
		elem2 = start->next;
		elem1->next = elem1->next->next;
		elem2->next = elem1;
		(*stack)->next = elem2;
		return (1);
	}
	return (0);
}

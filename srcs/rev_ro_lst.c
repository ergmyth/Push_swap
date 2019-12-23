/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_ro_lst.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleonard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 16:22:16 by eleonard          #+#    #+#             */
/*   Updated: 2019/10/24 16:22:24 by eleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		rev_ro_lst(t_stack **stack)
{
	t_stack	*start;
	t_stack	*elem;

	start = (*stack)->next;
	if (start && start->next)
	{
		while (start->next->next)
			start = start->next;
		elem = start->next;
		start->next = NULL;
		add_to_stack(stack, elem);
		return (1);
	}
	return (0);
}

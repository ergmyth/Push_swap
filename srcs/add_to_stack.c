/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_to_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleonard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 14:41:26 by eleonard          #+#    #+#             */
/*   Updated: 2019/10/24 15:02:45 by eleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	add_to_stack(t_stack **lst, t_stack *elem)
{
	t_stack	*start;

	start = (*lst)->next;
	elem->next = start;
	(*lst)->next = elem;
}

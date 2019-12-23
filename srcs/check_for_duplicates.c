/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_for_duplicates.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleonard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 14:23:04 by eleonard          #+#    #+#             */
/*   Updated: 2019/10/24 14:40:25 by eleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		check_for_duplicates(t_stack *stack, int nbr)
{
	t_stack	*start;

	start = stack->next;
	while (start)
		if (start->n == nbr)
			return (1);
		else
			start = start->next;
	return (0);
}

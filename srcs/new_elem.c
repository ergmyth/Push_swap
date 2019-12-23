/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_elem.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleonard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 14:46:52 by eleonard          #+#    #+#             */
/*   Updated: 2019/10/24 15:03:00 by eleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*new_elem(int nbr, int limiter)
{
	t_stack *new;

	if (!(new = (t_stack*)malloc(sizeof(t_stack))))
		case_of_error();
	new->next = NULL;
	new->limiter = limiter;
	new->n = nbr;
	return (new);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func_sa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleonard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 16:30:43 by eleonard          #+#    #+#             */
/*   Updated: 2019/10/24 16:30:44 by eleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		func_sa(t_ps *s)
{
	int res;

	res = swap_elems(&s->first->stack);
	if (s->print && res)
		write(1, "sa\n", 3);
	return (res);
}
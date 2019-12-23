/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_struct.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleonard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 18:20:48 by eleonard          #+#    #+#             */
/*   Updated: 2019/11/04 18:20:49 by eleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_ps	*init_struct(void)
{
	t_ps	*s;

	s = (t_ps*)malloc(sizeof(t_ps));
	if (!s)
		case_of_error();
	func_arr(s);
	s->func_size = 11;
	s->print = 1;
	return (s);
}

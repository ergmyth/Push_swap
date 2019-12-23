/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleonard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 13:56:41 by eleonard          #+#    #+#             */
/*   Updated: 2019/11/04 18:15:50 by eleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		main(int ac, char **av)
{
	int		i;
	t_ps	*s;

	i = --ac;
	if (i)
	{
		s = init_struct();
		fill_stack(i, av, s);
		fill_stack_vars(s->first, "asc");
		find_solution(s);
		func_free(s);
	}
	return (0);
}

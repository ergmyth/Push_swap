/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func_free.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleonard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 19:40:49 by eleonard          #+#    #+#             */
/*   Updated: 2019/11/04 19:40:50 by eleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	free_stack_vars(t_stack_vars *s)
{
	free(s->cur_tab);
	free(s->sorted_tab);
	free(s->cur_offset);
}

static void	free_stack(t_stack_vars *s)
{
	t_stack	*lst1;
	t_stack	*lst2;

	lst1 = s->stack;
	while (lst1)
	{
		lst2 = lst1->next;
		free(lst1);
		lst1 = lst2;
	}
}

static void	free_struct(t_stack_vars *s)
{
	free_stack(s);
	free_stack_vars(s);
	free(s);
}

void		func_free(t_ps *s)
{
	free_struct(s->first);
	free_struct(s->second);
	free(s->sorted_tab);
	free(s);
}

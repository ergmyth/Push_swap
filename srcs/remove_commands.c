/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   remove_commands.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleonard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 18:12:13 by eleonard          #+#    #+#             */
/*   Updated: 2019/11/04 18:12:29 by eleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rem_commands_next(t_ps *s, int last)
{
	if (!ft_strcmp(s->func[last].name, "rra"))
	{
		s->commands_offset[find_command_by_name("rr", s)] = -1;
		s->commands_offset[find_command_by_name("ra", s)] = -1;
		s->commands_offset[find_command_by_name("rrr", s)] = -1;
	}
	else if (!ft_strcmp(s->func[last].name, "sa") ||
			!ft_strcmp(s->func[last].name, "sb"))
	{
		s->commands_offset[last] = -1;
		s->commands_offset[find_command_by_name("ss", s)] = -1;
	}
	else if (!ft_strcmp(s->func[last].name, "ss"))
		s->commands_offset[last] = -1;
	else if (!ft_strcmp(s->func[last].name, "pa"))
		s->commands_offset[find_command_by_name("pb", s)] = -1;
	else if (!ft_strcmp(s->func[last].name, "pb"))
		s->commands_offset[find_command_by_name("pa", s)] = -1;
}

void		rem_commands(t_ps *s, int last)
{
	if (!ft_strcmp(s->func[last].name, "ra"))
	{
		s->commands_offset[find_command_by_name("rr", s)] = -1;
		s->commands_offset[find_command_by_name("rrr", s)] = -1;
		s->commands_offset[find_command_by_name("rra", s)] = -1;
	}
	else if (!ft_strcmp(s->func[last].name, "rb"))
	{
		s->commands_offset[find_command_by_name("rr", s)] = -1;
		s->commands_offset[find_command_by_name("rrr", s)] = -1;
		s->commands_offset[find_command_by_name("rrb", s)] = -1;
	}
	else if (!ft_strcmp(s->func[last].name, "rr"))
		s->commands_offset[find_command_by_name("rrr", s)] = -1;
	else if (!ft_strcmp(s->func[last].name, "rrr"))
		s->commands_offset[find_command_by_name("rr", s)] = -1;
	else if (!ft_strcmp(s->func[last].name, "rrb"))
	{
		s->commands_offset[find_command_by_name("rr", s)] = -1;
		s->commands_offset[find_command_by_name("rb", s)] = -1;
		s->commands_offset[find_command_by_name("rrr", s)] = -1;
	}
	else
		rem_commands_next(s, last);
}

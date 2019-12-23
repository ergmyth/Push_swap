/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   define_rev_command.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleonard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 18:16:44 by eleonard          #+#    #+#             */
/*   Updated: 2019/11/04 18:16:45 by eleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	def_rev_b(int i, t_ps *s)
{
	if (ft_strcmp(s->func[i].name, "sb") == 0)
		return (find_command_by_name("sb", s));
	else if (ft_strcmp(s->func[i].name, "rb") == 0)
		return (find_command_by_name("rrb", s));
	else if (ft_strcmp(s->func[i].name, "rrb") == 0)
		return (find_command_by_name("rb", s));
	else
		return (find_command_by_name("pa", s));
}

int			def_rev_a(int i, t_ps *s)
{
	if (ft_strcmp(s->func[i].name, "sa") == 0)
		return (find_command_by_name("sa", s));
	else if (ft_strcmp(s->func[i].name, "ss") == 0)
		return (find_command_by_name("ss", s));
	else if (ft_strcmp(s->func[i].name, "rr") == 0)
		return (find_command_by_name("rrr", s));
	else if (ft_strcmp(s->func[i].name, "ra") == 0)
		return (find_command_by_name("rra", s));
	else if (ft_strcmp(s->func[i].name, "rrr") == 0)
		return (find_command_by_name("rr", s));
	else if (ft_strcmp(s->func[i].name, "rra") == 0)
		return (find_command_by_name("ra", s));
	else if (ft_strcmp(s->func[i].name, "pa") == 0)
		return (find_command_by_name("pb", s));
	else
		return (def_rev_b(i, s));
}

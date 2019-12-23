/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleonard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 18:17:26 by eleonard          #+#    #+#             */
/*   Updated: 2019/11/04 18:17:27 by eleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	read_from_stdin(char *command, t_ps *s)
{
	int		i;
	char	buffer;

	i = 0;
	while (read(0, &buffer, 1))
		if (buffer == '\n')
		{
			i = find_command_by_name(command, s);
			if (i == -1)
				case_of_error();
			s->func[i].func(s);
			i = 0;
			ft_bzero(command, 3);
		}
		else if (i == 3)
			case_of_error();
		else
			command[i++] = buffer;
}

static void	check_stack(t_ps *s)
{
	char	command[3];

	ft_bzero(command, 3);
	read_from_stdin(command, s);
	if (is_sorted(s->first, 'a') && s->second->len < 1)
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
}

int			main(int ac, char **av)
{
	int		i;
	t_ps	*s;

	i = --ac;
	if (i)
	{
		s = init_struct();
		fill_stack(i, av, s);
		fill_stack_vars(s->first, "asc");
		s->print = 0;
		check_stack(s);
		func_free(s);
	}
	return (0);
}

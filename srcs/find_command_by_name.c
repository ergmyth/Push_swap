/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_command_by_name.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleonard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 18:16:25 by eleonard          #+#    #+#             */
/*   Updated: 2019/11/04 18:16:27 by eleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_command_by_name(char *str, t_ps *s)
{
	int i;

	i = 0;
	while (i < s->func_size)
	{
		if (ft_strncmp(str, s->func[i].name, 3) == 0)
			break ;
		i++;
	}
	if (i == 11)
		return (-1);
	return (i);
}

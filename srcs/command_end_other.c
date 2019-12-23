/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   command_end_other.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleonard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 18:17:02 by eleonard          #+#    #+#             */
/*   Updated: 2019/11/04 18:17:03 by eleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	command_end_other(t_ps *s)
{
	get_cur_tab(s->first);
	get_cur_tab(s->second);
	get_cur_offset(s->first);
	get_cur_offset(s->second);
}

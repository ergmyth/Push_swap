/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert_elem.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleonard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 18:20:40 by eleonard          #+#    #+#             */
/*   Updated: 2019/11/04 18:20:41 by eleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	insert_elem(int *tab, int elem, int len)
{
	int i;

	i = 0;
	while (i < len)
	{
		if (tab[i] < elem)
			break ;
		i++;
	}
	while (--len > i)
	{
		tab[len] = tab[len - 1];
	}
	tab[i] = elem;
}

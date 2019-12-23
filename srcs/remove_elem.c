/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   remove_elem.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleonard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 18:15:24 by eleonard          #+#    #+#             */
/*   Updated: 2019/11/04 18:15:33 by eleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	remove_elem(int *tab, int elem, int len)
{
	int i;

	i = 0;
	while (i < len)
		if (tab[i++] == elem)
			break ;
	while (i <= len)
	{
		tab[i - 1] = tab[i];
		i++;
	}
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array_asc_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleonard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 18:17:16 by eleonard          #+#    #+#             */
/*   Updated: 2019/11/04 18:17:17 by eleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	desc_sort_tab(int *tab, int len)
{
	int i;
	int temp;

	i = 1;
	while (i < len)
	{
		if (tab[i - 1] < tab[i])
		{
			temp = tab[i - 1];
			tab[i - 1] = tab[i];
			tab[i] = temp;
			i = 1;
		}
		else
			i++;
	}
}

void	array_sort(int *tab, int len, char *seq)
{
	int i;
	int temp;

	i = 1;
	if (ft_strcmp(seq, "asc") == 0)
	{
		while (i < len)
		{
			if (tab[i - 1] > tab[i])
			{
				temp = tab[i - 1];
				tab[i - 1] = tab[i];
				tab[i] = temp;
				i = 1;
			}
			else
				i++;
		}
	}
	else
		desc_sort_tab(tab, len);
}

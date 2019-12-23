/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleonard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 12:45:21 by eleonard          #+#    #+#             */
/*   Updated: 2019/10/25 12:45:23 by eleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static char	**count_size(int *count, char **av, int i, int *k)
{
	char	**arr;
	int		j;

	if (!(arr = ft_strsplit(av[i], ' ')))
		case_of_error();
	j = -1;
	*k = 0;
	while (arr[++j])
	{
		(*k)++;
		(*count)++;
	}
	return (arr);
}

static void	get_param(t_ps *s, char **arr, int k)
{
	int		nbr;
	t_stack	*elem;

	while (k)
	{
		nbr = get_nbr(arr[--k]);
		if (check_for_duplicates(s->first->stack, nbr))
			case_of_error();
		elem = new_elem(nbr, 0);
		add_to_stack(&s->first->stack, elem);
	}
}

static void	initialize_stacks(t_ps *s, int count)
{
	if (!(s->sorted_tab = (int*)malloc(sizeof(int) * count)))
		case_of_error();
	s->len = count;
	s->first = init_stack_vars(s->len);
	s->second = init_stack_vars(s->len);
	s->second->len = 0;
	s->second->mid = 0;
}

void		fill_stack(int i, char **av, t_ps *s)
{
	int		count;
	int		temp;
	char	**arr;
	int		arr_size;

	temp = i;
	count = 0;
	while (i)
	{
		arr = count_size(&count, av, i--, &arr_size);
		while (arr_size--)
			free(arr[arr_size]);
		free(arr);
	}
	initialize_stacks(s, count);
	while (temp)
	{
		arr = count_size(&count, av, temp--, &arr_size);
		get_param(s, arr, arr_size);
		while (arr_size--)
			free(arr[arr_size]);
		free(arr);
	}
	get_cur_tab(s->first);
	array_sort(s->sorted_tab, s->len, "asc");
}

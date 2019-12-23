/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_nbr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleonard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 14:14:40 by eleonard          #+#    #+#             */
/*   Updated: 2019/10/24 14:21:23 by eleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		get_nbr(char *str)
{
	long long int	res;
	int				sign;

	sign = 1;
	res = 0;
	if (*str == ' ' || *str == '+' || *str == '-' ||
		(*str >= 48 && *str <= 57) || (*str >= 9 && *str <= 13))
	{
		while ((*str >= 9 && *str <= 13) || *str == ' ')
			str++;
		if (*str == '+' || (*str == '-' && (sign *= -1)))
			str++;
		if (!(*str >= 48 && *str <= 57))
			case_of_error();
		while (*str >= 48 && *str <= 57)
		{
			res = res * 10 + *(str++) - '0';
			if ((res > 2147483647 && sign == 1) ||
					(res > 2147483648 && sign == -1))
				case_of_error();
		}
		return (res * sign);
	}
	case_of_error();
	return (0);
}

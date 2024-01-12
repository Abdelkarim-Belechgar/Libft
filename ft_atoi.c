/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelechg <abelechg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 13:58:50 by abelechg          #+#    #+#             */
/*   Updated: 2023/12/09 00:07:42 by abelechg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long long int	check;
	int				result;
	int				sign;

	sign = 1;
	result = 0;
	while ((*str >= 9 && *str <= 13) || *str == ' ')
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str >= 48 && *str <= 57)
	{
		check = result;
		result = result * 10 + sign * (*str - 48);
		if (sign == -1 && check < result)
			return (0);
		else if (sign == 1 && check > result)
			return (-1);
		str++;
	}
	return (result);
}

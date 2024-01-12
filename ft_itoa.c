/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelechg <abelechg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 21:13:58 by abelechg          #+#    #+#             */
/*   Updated: 2023/12/16 20:14:30 by abelechg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_size(int nbr)
{
	int	z;

	z = 0;
	if (nbr == -2147483648)
		return (11);
	if (nbr < 0)
	{
		nbr = nbr * (-1);
		z++;
	}
	while (nbr > 9)
	{
		nbr = nbr / 10;
		z++;
	}
	if (nbr < 10)
		z++;
	return (z); 
}

static char	*ft_number(int n, int size, char *str)
{
	if (n < 0)
	{
		*str = '-';
		if (n == -2147483648)
		{
			str[1] = '2';
			n = -147483648;
		}
		n = n * (-1);
	}
	if (n == 0)
		*str = n + 48;
	str[size--] = '\0';
	while (n > 0 && size + 1 > 0)
	{
		str[size--] = (n % 10) + 48;
		n = n / 10;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		size;

	size = ft_size(n);
	str = (char *)malloc(sizeof(char) * size + 1);
	if (!str)
		return (NULL);
	str = ft_number(n, size, str);
	return (str);
}

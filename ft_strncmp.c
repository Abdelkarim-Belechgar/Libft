/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelechg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 14:20:53 by abelechg          #+#    #+#             */
/*   Updated: 2023/12/22 14:20:59 by abelechg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	z;
	int		x;

	z = 0;
	x = 0;
	if (n == 0)
		return (0);
	while (s1[z] == s2[z] && z < n && s1[z] != '\0')
		z++;
	if (s1[z] != s2[z] && z < n)
		x = (unsigned char)s1[z] - (unsigned char)s2[z];
	if (x > 0)
		return (1);
	else if (x < 0)
		return (-1);
	return (x);
}

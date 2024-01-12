/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelechg <abelechg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 09:35:15 by abelechg          #+#    #+#             */
/*   Updated: 2024/01/10 00:45:40 by abelechg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*dest;
	unsigned char	*srcc;
	size_t			z;

	z = 0;
	srcc = (unsigned char *)src;
	dest = (unsigned char *)dst;
	if (dest == srcc)
		return (dst);
	while (z < n)
	{
		dest[z] = srcc[z];
		z++;
	}
	return (dst);
}

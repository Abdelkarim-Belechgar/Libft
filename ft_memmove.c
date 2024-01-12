/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelechg <abelechg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 22:26:03 by abelechg          #+#    #+#             */
/*   Updated: 2024/01/10 00:47:16 by abelechg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dest;
	unsigned char	*srcc;
	size_t			z;

	z = 0;
	dest = (unsigned char *)dst;
	srcc = (unsigned char *)src;
	if (dest == srcc)
		return (dst);
	while (len--)
	{
		if (dest < srcc)
		{
			dest[z] = srcc[z];
			z++;
		}
		else
			dest[len] = srcc[len];
	}
	return (dst);
}

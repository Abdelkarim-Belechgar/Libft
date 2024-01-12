/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelechg <abelechg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 15:20:16 by abelechg          #+#    #+#             */
/*   Updated: 2024/01/10 01:21:03 by abelechg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	z;
	size_t	slen;

	slen = ft_strlen(src);
	if (dstsize != 0)
	{
		z = 0;
		while (src[z] && (z < dstsize - 1))
		{
			dst[z] = src[z];
			z++; 
		}
		dst[z] = '\0';
	}
	return (slen);
}

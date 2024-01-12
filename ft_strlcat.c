/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelechg <abelechg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 18:35:18 by abelechg          #+#    #+#             */
/*   Updated: 2023/12/09 15:18:03 by abelechg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	ldst;
	size_t	lsrc;
	size_t	z;
	size_t	l;

	ldst = 0;
	lsrc = ft_strlen(src);
	if (dst || dstsize > 0)
		ldst = ft_strlen(dst);
	if (dstsize <= ldst)
		return (lsrc + dstsize);
	l = ldst;
	z = 0;
	while (src[z] && l < (dstsize - 1))
		dst[l++] = src[z++];
	dst[l] = '\0';
	return (ldst + lsrc);
}

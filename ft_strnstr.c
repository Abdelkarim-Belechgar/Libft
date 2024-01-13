/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelechg <abelechg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 21:08:34 by abelechg          #+#    #+#             */
/*   Updated: 2023/12/09 00:28:19 by abelechg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	z;
	size_t	y;
	size_t	lneedle;

	z = 0;
	lneedle = ft_strlen(needle);
	if ((len == 0 && !haystack) || lneedle == 0)
		return ((char *)haystack);
	while (haystack[z] && z < len)
	{
		y = 0;
		while (needle[y] && haystack[y] && z + y < len
			&& needle[y] == haystack[y + z])
			y++;
		if (needle[y] == '\0')
			return ((char *)haystack + z);
		z++;
	}
	return (NULL);
}

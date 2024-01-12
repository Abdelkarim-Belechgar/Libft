/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelechg <abelechg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 17:26:16 by abelechg          #+#    #+#             */
/*   Updated: 2023/12/11 22:24:34 by abelechg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	z;

	z = ft_strlen(s);
	while (z > 0 && s[z] != (char)c)
		z--;
	if (s[z] == (char)c)
		return ((char *)s + z);
	return (0);
}

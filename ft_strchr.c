/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelechg <abelechg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 17:07:12 by abelechg          #+#    #+#             */
/*   Updated: 2023/12/11 22:21:44 by abelechg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	z;

	z = 0;
	while (s[z] && s[z] != (char)c)
		z++;
	if (s[z] != (char)c)
		return (0);
	return ((char *)s + z);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelechg <abelechg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 12:47:10 by abelechg          #+#    #+#             */
/*   Updated: 2023/12/14 12:47:28 by abelechg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	z;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (len > (ft_strlen(s) - start))
		return (ft_strdup(s + start));
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	z = 0;
	while (len--)
		str[z++] = s[start++];
	str[z] = 0x00;
	return (str);
}

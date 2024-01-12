/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelechg <abelechg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 14:19:52 by abelechg          #+#    #+#             */
/*   Updated: 2023/12/16 20:18:27 by abelechg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	lenstr;

	if (!s1 || !s2)
		return (NULL);
	lenstr = ft_strlen(s1) + ft_strlen(s2);
	str = (char *)malloc(sizeof(char) * (lenstr + 1));
	if (!str)
		return (0);
	ft_memcpy(str, s1, ft_strlen(s1));
	ft_memcpy(str + ft_strlen(s1), s2, ft_strlen(s2));
	str[lenstr] = '\0';
	return (str);
}

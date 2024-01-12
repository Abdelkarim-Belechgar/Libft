/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelechg <abelechg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 16:04:03 by abelechg          #+#    #+#             */
/*   Updated: 2023/12/14 16:04:17 by abelechg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_serch(char const c, char const *set)
{
	while (*set != c && *set)
		set++;
	if (*set == c && *set)
		return (1);
	return (0);
}

static size_t	ft_start(char const *s1, char const *set)
{
	int	z;

	z = 0;
	while (ft_serch(s1[z], set))
		z++;
	return (z);
}

static size_t	ft_end(char const *s1, char const *set, size_t start)
{
	size_t	slen;

	if (*s1 == '\0')
		return (0);
	slen = ft_strlen(s1);
	while (ft_serch(s1[slen - 1], set) && (slen > start))
		slen--;
	return (slen);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	len;
	size_t	start;
	size_t	end;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	start = ft_start(s1, set);
	end = ft_end(s1, set, start);
	len = end - start;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	ft_strlcpy(str, s1 + start, len + 1);
	return (str);
}

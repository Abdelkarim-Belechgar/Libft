/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelechg <abelechg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 17:25:27 by abelechg          #+#    #+#             */
/*   Updated: 2023/12/13 17:25:29 by abelechg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_strcount(char const *str, char c)
{
	size_t	strcount;

	strcount = 0;
	while (str && *str)
	{
		if (str && *str != c && (*(str + 1) == c || *(str + 1) == '\0'))
			strcount++;
		str++;
	}
	return (strcount);
}

static void	ft_free(char **str)
{
	int	len;

	len = 0;
	while (str && str[len])
	{
		free(str[len]);
		len++;
	}
	free(str);
}

static char	**ft_string11(char **str, char const *s, char c, size_t lenstr)
{
	size_t	z;
	size_t	y;

	y = 0;
	while (y < lenstr)
	{
		z = 0;
		while (s && *s == c)
			s++;
		while (s[z] && s[z] != c)
			z++;
		str[y] = ft_substr(s, 0, z);
		if (!str[y])
		{
			ft_free(str);
			return (NULL);
		}
		while (*s && *s != c)
			s++;
		y++;
	}
	str[y] = NULL;
	return (str);
}

char	**ft_split(char const *s, char c)
{
	size_t	lenstr;
	char	**str;

	if (!s)
		return (NULL);
	lenstr = ft_strcount(s, c);
	str = (char **)malloc(sizeof(char *) * (lenstr + 1));
	if (!str)
		return (NULL);
	str = ft_string11(str, s, c, lenstr);
	return (str);
}

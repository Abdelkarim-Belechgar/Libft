/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelechg <abelechg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 16:45:25 by abelechg          #+#    #+#             */
/*   Updated: 2023/12/19 22:04:20 by abelechg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	lens1;
	char	*str;

	lens1 = ft_strlen(s1);
	str = (char *)malloc(sizeof(char) * (lens1 + 1));
	if (!str)
		return (0);
	ft_memcpy(str, s1, lens1);
	str[lens1] = '\0';
	return (str);
}

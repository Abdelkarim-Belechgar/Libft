/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelechg <abelechg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 14:32:50 by abelechg          #+#    #+#             */
/*   Updated: 2023/12/16 14:33:07 by abelechg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	int		z;
	int		lens;

	if (!s || !f)
		return (NULL);
	lens = ft_strlen(s);
	z = 0;
	str = (char *)malloc(sizeof(char) * (lens + 1));
	if (!str)
		return (NULL);
	while (lens > z)
	{
		str[z] = f(z, s[z]);
		z++;
	}
	str[z] = '\0';
	return (str);
}

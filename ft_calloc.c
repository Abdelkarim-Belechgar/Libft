/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelechg <abelechg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 16:26:16 by abelechg          #+#    #+#             */
/*   Updated: 2023/12/16 20:09:01 by abelechg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*str;
	int		z;
	size_t	allsize;

	z = 0;
	allsize = count * size;
	if ((int)count < z && (int)size < z)
		return (NULL);
	str = (void *)malloc(allsize);
	if (!str)
		return (NULL);
	while (allsize--)
	{
		((unsigned char *)str)[z] = '\0';
		z++;
	}
	return (str);
}

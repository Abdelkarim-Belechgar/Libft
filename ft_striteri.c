/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelechg <abelechg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 22:16:05 by abelechg          #+#    #+#             */
/*   Updated: 2023/12/19 22:16:38 by abelechg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	z;

	if (!s || !f)
		return ;
	z = 0;
	while (s[z])
	{
		f(z, &s[z]);
		z++;
	}
}

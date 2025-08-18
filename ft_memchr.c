/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmodalla <bmodalla@amman.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 22:02:12 by bmodalla          #+#    #+#             */
/*   Updated: 2025/08/18 16:35:06 by bmodalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*i;

	i = (const unsigned char *)s;
	while (n--)
	{
		if (*i == (unsigned char)c)
			return ((void *)i);
		i++;
	}
	return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmodalla <bmodalla@amman.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 17:40:56 by bmodalla          #+#    #+#             */
/*   Updated: 2025/08/18 15:13:25 by bmodalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*bdest;
	const unsigned char	*bsrc;
	size_t				i;

	bdest = (unsigned char *)dest;
	bsrc = (const unsigned char *)src;
	if (bdest == bsrc || n == 0)
		return (dest);
	if (bdest < bsrc)
	{
		i = 0;
		while (i < n)
		{
			bdest[i] = bsrc[i];
			i++;
		}
	}
	else
	{
		while (n--)
			bdest[n] = bsrc[n];
	}
	return (dest);
}

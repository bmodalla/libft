/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmodalla <bmodalla@amman.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 21:51:32 by bmodalla          #+#    #+#             */
/*   Updated: 2025/08/18 15:03:43 by bmodalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*r;
	size_t	sl;

	if (!s)
		return (NULL);
	sl = ft_strlen(s);
	if (start >= sl)
	{
		r = malloc(sizeof(char));
		if (!r)
			return (NULL);
		r[0] = '\0';
		return (r);
	}
	if (start + len > sl)
		len = sl - start;
	r = malloc(sizeof(char) * (len + 1));
	if (!r)
		return (NULL);
	ft_strlcpy(r, s + start, len + 1);
	r[len] = '\0';
	return (r);
}

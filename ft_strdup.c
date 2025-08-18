/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmodalla <bmodalla@amman.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 17:59:00 by bmodalla          #+#    #+#             */
/*   Updated: 2025/08/18 16:52:15 by bmodalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*b;
	size_t	size;

	size = ft_strlen(s);
	b = (char *)malloc(size + 1);
	if (!b)
		return (NULL);
	ft_strlcpy(b, s, size + 1);
	return (b);
}

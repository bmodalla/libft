/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmodalla <bmodalla@amman.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 19:48:46 by bmodalla          #+#    #+#             */
/*   Updated: 2025/08/18 14:57:21 by bmodalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	l1;
	size_t	l2;
	char	*ns;
	size_t	i;

	if (!s1 || !s2)
		return (NULL);
	l1 = ft_strlen(s1);
	l2 = ft_strlen(s2);
	i = 0;
	ns = (char *)malloc(l1 + l2 + 1);
	if (!ns)
		return (NULL);
	while (i < l1)
	{
		ns[i] = s1[i];
		i++;
	}
	while (i < l1 + l2)
	{
		ns[i] = s2[i - l1];
		i++;
	}
	ns[i] = '\0';
	return (ns);
}

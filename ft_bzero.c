/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmodalla <bmodalla@amman.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 17:26:54 by bmodalla          #+#    #+#             */
/*   Updated: 2025/08/18 15:40:10 by bmodalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include<stdio.h>

// #include <strings.h>
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*b;
	size_t	d;

	b = s;
	d = 0;
	while (d < n)
	{
		b[d] = '\0';
		d++;
	}
}

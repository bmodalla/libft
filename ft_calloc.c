/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmodalla <bmodalla@amman.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 17:34:36 by bmodalla          #+#    #+#             */
/*   Updated: 2025/08/17 17:50:26 by bmodalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	fsz;
	void	*p;

	if (nmemb == 0 || size == 0)
		return (malloc(1));
	fsz = nmemb * size;
	p = malloc(fsz);
	if (!p)
		return (NULL);
	ft_bzero(p, fsz);
	return (p);
}
// int main(void)
// {
//     size_t  count = 5;
//     int     *arr;
//     size_t  i;

//     arr = (int *)ft_calloc(count, sizeof(int));
//     if (arr == NULL)
//     {
//         printf("Memory allocation failed.\n");
//         return (1);
//     }

//     printf("Allocated and zero-initialized array:\n");
//     for (i = 0; i < count; i++)
//         printf("arr[%zu] = %d\n", i, arr[i]);

//     free(arr);
//     return (0);
// }
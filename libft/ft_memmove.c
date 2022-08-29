/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnishimu <rnishimu@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 12:19:58 by rnishimu          #+#    #+#             */
/*   Updated: 2021/05/21 12:19:58 by rnishimu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*source;
	unsigned char	*dest;
	size_t			i;

	if (src == dst || n == 0)
		return (dst);
	source = (unsigned char *)src;
	dest = (unsigned char *)dst;
	i = 0;
	if (dest < source)
		ft_memcpy(dest, source, n);
	else
	{
		while (i < n)
		{
			dest[n - 1 - i] = source[n - 1 - i];
			i++;
		}
	}
	return (dst);
}

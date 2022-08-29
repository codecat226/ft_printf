/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnishimu <rnishimu@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 12:19:14 by rnishimu          #+#    #+#             */
/*   Updated: 2021/05/21 12:19:14 by rnishimu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*a;
	unsigned char	*b;
	unsigned char	temp;

	a = (unsigned char *)src;
	b = (unsigned char *)dest;
	temp = (unsigned char)c;
	while (n > 0)
	{
		if (*a == temp)
		{
			*b = *a;
			return (b + 1);
		}
		else
		{
			*b = *a;
			n--;
			a++;
			b++;
		}
	}
	return (NULL);
}

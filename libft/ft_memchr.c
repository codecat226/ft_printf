/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnishimu <rnishimu@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 12:19:23 by rnishimu          #+#    #+#             */
/*   Updated: 2021/05/21 12:19:23 by rnishimu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*a;
	unsigned char	b;

	b = (unsigned char )c;
	a = (unsigned char *)s;
	while (n > 0)
	{
		if (*a == b)
		{
			return (a);
		}
		n--;
		a++;
	}
	return (NULL);
}

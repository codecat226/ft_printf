/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnishimu <rnishimu@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 18:17:34 by rnishimu          #+#    #+#             */
/*   Updated: 2021/05/21 18:17:34 by rnishimu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				len;
	unsigned char	a;

	a = (unsigned char)c;
	len = ft_strlen(s);
	while (len > 0)
	{
		if (s[len] == a)
		{
			return ((char *)s + len);
		}
		len--;
	}
	if (s[len] == a)
	{
		return ((char *)s);
	}
	return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnishimu <rnishimu@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 22:34:54 by rnishimu          #+#    #+#             */
/*   Updated: 2021/05/23 22:34:54 by rnishimu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*s2;
	size_t			i;
	unsigned int	j;

	if (s == 0)
		return (NULL);
	s2 = malloc(len + 1);
	j = ft_strlen(s);
	if (s2 == 0)
		return (NULL);
	i = 0;
	if (start < j)
	{
		while (i < len && (s[start + i] != '\0'))
		{
			s2[i] = s[start + i];
			i++;
		}
	}
	s2[i] = '\0';
	return (s2);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnishimu <rnishimu@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 20:19:59 by rnishimu          #+#    #+#             */
/*   Updated: 2021/05/23 20:19:59 by rnishimu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*s2;
	int		i;
	int		len;

	s2 = NULL;
	len = 0;
	i = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	s2 = (char *)malloc(sizeof(char) * (len + 1));
	if (s2 == 0)
		return (NULL);
	while (i < len)
	{
		s2[i] = s[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnishimu <rnishimu@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 14:59:26 by rnishimu          #+#    #+#             */
/*   Updated: 2021/05/21 14:59:26 by rnishimu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t			len_dst;
	size_t			p_dst;
	size_t			p_src;

	len_dst = ft_strlen(dst);
	p_dst = 0;
	p_src = 0;
	if (size <= len_dst)
	{
		return (size + ft_strlen(src));
	}
	while (dst[p_dst] != '\0')
		p_dst++;
	while (src[p_src] != '\0' && size - p_dst - 1 > 0)
	{
		dst[p_dst] = src[p_src];
		p_dst++;
		p_src++;
	}
	dst[p_dst] = '\0';
	return (len_dst + ft_strlen(src));
}

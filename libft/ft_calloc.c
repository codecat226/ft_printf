/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnishimu <rnishimu@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 20:10:08 by rnishimu          #+#    #+#             */
/*   Updated: 2021/05/23 20:10:08 by rnishimu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*pointer;

	pointer = (void *)malloc(nmemb * size);
	if (pointer == NULL)
		return (NULL);
	ft_bzero(pointer, nmemb * size);
	return (pointer);
}

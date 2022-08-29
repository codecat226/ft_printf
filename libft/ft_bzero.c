/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnishimu <rnishimu@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 12:19:01 by rnishimu          #+#    #+#             */
/*   Updated: 2021/05/21 12:19:01 by rnishimu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{	
	unsigned char	*a;

	a = (unsigned char *)s;
	while (n > 0)
	{
		*a = '\0';
		n--;
		a++;
	}
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex_small.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnishimu <rnishimu@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 17:01:02 by rnishimu          #+#    #+#             */
/*   Updated: 2021/11/22 21:10:11 by rnishimu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_convert_alpha(unsigned long int i)
{
	char	c;

	if (i <= 9)
		c = i + 48;
	else if (i >= 10)
		c = i + 87;
	write(1, &c, 1);
}

int	ft_hex_small(unsigned long int x)
{
	int	count;

	count = 0;
	if (x >= 16)
		ft_hex_small(x / 16);
	ft_convert_alpha(x % 16);
	while (x >= 16)
	{
		x = x / 16;
		count += 1;
	}
	return (count + 1);
}

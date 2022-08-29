/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uint.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnishimu <rnishimu@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 22:50:31 by rnishimu          #+#    #+#             */
/*   Updated: 2021/11/22 21:51:31 by rnishimu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_uint(unsigned int u)
{
	int				count;
	unsigned int	remain;

	if (u >= 10)
	{
		ft_uint(u / 10);
	}
	remain = u % 10;
	ft_putnbr_fd(remain, 1);
	count = 0;
	while (u >= 10)
	{
		u = (u / 10);
		count += 1;
	}
	return (count + 1);
}

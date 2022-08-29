/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dec.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnishimu <rnishimu@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 17:00:53 by rnishimu          #+#    #+#             */
/*   Updated: 2021/11/22 20:43:45 by rnishimu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*exact same code as ft_int*/

int	ft_dec(int i)
{
	int	count;

	count = 1;
	ft_putnbr_fd(i, 1);
	if (i < 0)
		count += 1;
	while (i > 9 || i < -9)
	{
		i = i / 10;
		count += 1;
	}
	return (count);
}

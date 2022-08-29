/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnishimu <rnishimu@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 17:01:05 by rnishimu          #+#    #+#             */
/*   Updated: 2021/11/22 21:16:39 by rnishimu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_int(int i)
{
	int	count;

	ft_putnbr_fd(i, 1);
	count = 0;
	if (i < 0)
		count += 1;
	while (i > 9 || i < -9)
	{
		i = i / 10;
		count += 1;
	}
	return (count + 1);
}

/*if negative sign exists count++
return count number*/
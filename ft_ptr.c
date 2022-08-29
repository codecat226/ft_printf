/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnishimu <rnishimu@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 17:01:09 by rnishimu          #+#    #+#             */
/*   Updated: 2021/11/22 20:40:52 by rnishimu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_ptr(void *p)
{
	unsigned long	address;

	address = (unsigned long)p;
	write(1, "0x", 2);
	return (2 + ft_hex_small(address));
}

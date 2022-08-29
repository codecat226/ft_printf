/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnishimu <rnishimu@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 17:01:12 by rnishimu          #+#    #+#             */
/*   Updated: 2021/11/16 14:35:59 by rnishimu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_string(char	*string)
{
	int	i;

	if (!string)
	{
		return (ft_string("(null)"));
	}
	i = 0;
	while (string[i])
	{
		write(1, &string[i], 1);
		i++;
	}
	return (ft_strlen(string));
}

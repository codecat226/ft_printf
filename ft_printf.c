/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnishimu <rnishimu@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 16:31:36 by rnishimu          #+#    #+#             */
/*   Updated: 2021/11/19 23:00:13 by rnishimu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_checktype(const char *ptr, va_list args)
{
	if (*ptr == 'c')
		return (ft_char(va_arg(args, int)));
	if (*ptr == 's')
		return (ft_string(va_arg(args, char *)));
	if (*ptr == 'p')
		return (ft_ptr(va_arg(args, void *)));
	if (*ptr == 'u')
		return (ft_uint(va_arg(args, unsigned int)));
	if (*ptr == 'd')
		return (ft_dec(va_arg(args, int)));
	if (*ptr == 'i')
		return (ft_int(va_arg(args, int)));
	if (*ptr == 'x')
		return (ft_hex_small(va_arg(args, unsigned int)));
	if (*ptr == 'X')
		return (ft_hex_big(va_arg(args, unsigned int)));
	if (*ptr == '%')
	{
		write(1, ptr, 1);
		return (1);
	}
	return (0);
}

/**main function
 * format in a pointer to the last known variable
 * "..." refers to variable num of arguments which printf can take
 * set count to 0 as printf returns number of chars printed
 * if there is a "%" sign, conversion is needed with help of the variable 
 * which is kept track with the va_list macro
 * else if not a "%" sign,  
**/

int	ft_printf(const	char *format, ...)
{
	va_list	args;
	int		count;
	int		i;

	va_start(args, format);
	count = 0;
	i = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			i += 1;
			count += ft_checktype(&format[i], args);
		}
		else
		{
			write(1, &format[i], 1);
			count++;
		}
		i++;
	}
	va_end(args);
	return (count);
}

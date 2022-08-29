/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnishimu <rnishimu@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 17:04:24 by rnishimu          #+#    #+#             */
/*   Updated: 2021/11/22 23:29:11 by rnishimu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include "libft/libft.h"

int	ft_printf(const	char *format, ...);
int	ft_char(char c);
int	ft_int(int i);
int	ft_dec(int d);
int	ft_uint(unsigned int u);
int	ft_ptr(void *p);
int	ft_string(char *string);
int	ft_hex_big(unsigned long int x);
int	ft_hex_small(unsigned long int x);

#endif
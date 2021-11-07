/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: LeoMoreno <lmoreno@student.42quebec.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 15:49:49 by LeoMoreno         #+#    #+#             */
/*   Updated: 2021/11/04 19:02:46 by LeoMoreno        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
//#include "../libft/libft.h"

int	ft_printf(const char *format, ...)
{
	char			*str;
	unsigned int	i;
	va_list			argva;

	va_start(argva, format);
	str = (char *) format;
	while (*str)
	{
		if (*str == '%')
			ft_checkarg(*++str, argva);
		else
			ft_putchar(*str);
		str++;
	}
	va_end(argva);
	return (0);
}

int	main(void)
{
	ft_printf(" %i Hola %s mi Leo", 65, "buenos dias");
}

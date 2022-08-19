/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handleformat.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmongell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 19:44:43 by tmongell          #+#    #+#             */
/*   Updated: 2022/08/19 18:19:59 by tmongell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_handle_format(int fd, char form, va_list ap)
{
	if (form == '%')
		return (write(fd, "%", 1));
	else if (form == 'c')
		return (ft_printchar(fd, va_arg(ap, int)));
	else if (form == 's')
		return (ft_printstr(fd, va_arg(ap, char *)));
	else if (form == 'p')
		return (ft_printptr(fd, va_arg(ap, void *)));
	else if (form == 'i' || form == 'd')
		return (ft_printnbr(fd, va_arg(ap, int)));
	else if (form == 'u')
		return (ft_printbase(fd, va_arg(ap, unsigned int), "0123456789"));
	else if (form == 'x')
		return (ft_printbase(fd, va_arg(ap, unsigned int), "0123456789abcdef"));
	else if (form == 'X')
		return (ft_printbase(fd, va_arg(ap, unsigned int), "0123456789ABCDEF"));
	else
		return (-1);
}

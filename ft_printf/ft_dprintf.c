/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmongell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 17:48:45 by tmongell          #+#    #+#             */
/*   Updated: 2022/08/19 18:28:51 by tmongell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
//could have been in main code but I lacked place...
static int	ft_retvalue(int localretvalue, int *error)
{
	if (localretvalue < 0)
	{
		*error = -1;
		return (-localretvalue);
	}
	else
		return (localretvalue);
}

int	ft_dprintf(int fd, const char *str, ...)
{
	int		i;
	int		retvalue;
	int		error;
	va_list	ap;

	retvalue = 0;
	error = 1;
	va_start(ap, str);
	i = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			i ++;
			retvalue += ft_retvalue(ft_handle_format(fd, str[i], ap), &error);
		}
		else
		{
			write(fd, &str[i], 1);
			retvalue ++;
		}
		i ++;
	}
	va_end(ap);
	return (retvalue * error);
}

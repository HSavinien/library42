/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmongell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 19:14:41 by tmongell          #+#    #+#             */
/*   Updated: 2022/08/19 18:22:38 by tmongell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_handlesign(int fd, long int *nb)
{
	if (*nb < 0)
	{
		write(fd, "-", 1);
		*nb *= -1;
		return (1);
	}
	return (0);
}

int	ft_printnbr(int fd, long int nb)
{
	int	retval;

	retval = 0;
	retval += ft_handlesign(fd, &nb);
	retval += ft_printbase(fd, nb, "0123456789");
	return (retval);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmongell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 14:49:24 by tmongell          #+#    #+#             */
/*   Updated: 2022/08/19 18:26:48 by tmongell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libftprintf.h"

int	ft_printptr(int fd, void *ptr)
{
	write(1, "0x", 2);
	return (2 + ft_printbase(fd, (unsigned long int)ptr, "0123456789abcdef"));
}

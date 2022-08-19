/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmongell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 14:43:51 by tmongell          #+#    #+#             */
/*   Updated: 2022/08/19 18:27:13 by tmongell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libftprintf.h"

int	ft_printstr(int fd, char *str)
{
	if (!str)
		return (write(fd, "(null)", 6));
	return (write(fd, str, pf_strlen(str)));
}

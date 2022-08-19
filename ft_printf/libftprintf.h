/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmongell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 00:21:49 by tmongell          #+#    #+#             */
/*   Updated: 2022/08/19 18:19:47 by tmongell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include <string.h>

//main functions
int		ft_handle_format(int fd, char form, va_list ap);
int		ft_printf(const char *str, ...);
int		ft_dprintf(int fd, const char *str, ...);
//format functions
int		ft_printchar(int fd, int c);
int		ft_printstr(int fd, char *str);
int		ft_printptr(int fd, void *ptr);
int		ft_printnbr(int fd, long int nb);
int		ft_printbase(int fd, long unsigned int nb, char *base);
//subfunction (used by the others)
size_t	pf_strlen(const char *s);
#endif

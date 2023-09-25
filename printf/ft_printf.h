/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrundl <dbrundl@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 12:21:12 by dbrundl           #+#    #+#             */
/*   Updated: 2023/09/20 12:21:16 by dbrundl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "Libft/libft.h"

# define HEX "0123456789abcdef"
# define HEX2 "0123456789ABCDEF"

int ft_printf(const char *format, ...);
int ft_write(char * c);
int	ft_print_hex(unsigned int num, char form);
int ft_print_pointer(void *p);
#endif

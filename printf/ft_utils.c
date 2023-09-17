
#include "ft_printf.h"

void	ft_flags_init(t_flags *flags)
{
	flags->dot = 0;
	flags->minus = 0;
	flags->zero = 0;
	flags->numb = 0;
}

int	ft_istype(char c)
{
	if (c == 'c' || c == 's' || c == 'p' || c == 'd' || c == 'i' || c == 'u'
		|| c == 'x' || c == 'X' || c == '%')
		return (1);
	return (0);
}

int	ft_isspec(char c)
{
	if (ft_isdigit(c) || c == '-' || c == '.' || ft_istype(c))
		return (1);
	return (0);
}
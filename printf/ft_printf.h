#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "libft/libft.h"

# define STDOUT 1
# define HEX "0123456789abcdef"

typedef struct s_flags
{
	int	minus;
	int	zero;
	int	dot;
	int	numb;
}		t_flags;

int		ft_printf(const char *fmt, ...);
int		ft_vap(t_flags *flags, void *n);
int		ft_vau(t_flags *flags, unsigned int nbr);
int		ft_vas(t_flags *flags, const char *str);
int		ft_vac(t_flags *flags, const char c);
int		ft_vaid(t_flags *flags, int nbr);
int		ft_vaxx(t_flags *flags, int nbr);
int		ft_vax(t_flags *flags, int nbr);
size_t	ft_nbrlen_hex(int n);
size_t	ft_nbrlen(int n);
void	ft_flags_init(t_flags *flags);
char	*ft_itoa_hex(int n);
int		ft_get_spaces(t_flags *flags, size_t strlen);
int		ft_xoff(int strlen, int zero, int dot);
int		ft_putnstr(const char *str, int n);
int		ft_putnchar(char c, int n);
int		ft_istype(char c);
int		ft_isspec(char c);

#endif
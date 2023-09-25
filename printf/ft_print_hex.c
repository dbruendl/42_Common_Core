
#include "ft_printf.h"

int	ft_print_hex(unsigned int num, char form)
{
	int i;

    i = 0;
    if (num == 0)
    {
		ft_putchar_fd("0",1);
        return (1);
    }
    else
    {
        if(form == "x")
		    i = ft_write(itoa_base(num,HEX));
        else
            i = i = ft_write(itoa_base(num,HEX2));
    }
    return (i);
}
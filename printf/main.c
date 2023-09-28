#include "ft_printf.h"

int main(void)
{
/*char *p = 0;
printf("Here is the test for Char \n");
printf("%d \n", ft_printf(" %c %c %c ", '0', 0, '1'));
printf("%d \n", ft_printf(" %c %c %c ", ' ', ' ', ' '));
printf("%d \n", ft_printf(" %c %c %c ", '1', '2', '3'));
printf("%d \n", ft_printf(" %c %c %c ", '2', '1', 0));
printf("%d \n", ft_printf(" %c %c %c ", 0, '1', '2'));
printf("Here is the test for String \n");
printf("%d \n", ft_printf("%s", ""));
printf("%d \n", ft_printf(" %s", ""));
printf("%d \n", ft_printf("%s ", ""));
printf("%d \n", ft_printf(" %s ", ""));
printf("%d \n", ft_printf(" %s %s ", "", "-"));
printf("%d \n", ft_printf(" %s %s ", " - ", ""));
printf("%d \n", ft_printf(" %s %s %s %s %s", " - ", "", "4", "", "bla"));
printf("%d \n", ft_printf(" %s %s %s %s %s ", " - ", "", "4", "", "2 "));
printf("%d \n", ft_printf(" NULL %s NULL ", NULL));
printf("Here is the test for Digit \n");
printf("%d \n", ft_printf(" %d ", -1));
printf("%d \n", ft_printf(" %d ", 10));
printf("%d \n", ft_printf(" %d ", 11));
printf("%d \n", ft_printf(" %d ", 15));
printf("%d \n", ft_printf(" %d ", 16));
printf("%d \n", ft_printf(" %d ", 17));
printf("Here is the test for Pointer \n");
printf("%d \n", ft_printf(" %p %p ", p, p));
printf("%d \n", printf(" %p %p ", p, p));*/
printf("Here is the test for unsigned decimal \n");
printf("%d \n", ft_printf(" %u ", -1));
printf("%d \n",printf(" %u ", -1));
printf("%d \n", ft_printf(" %u ", -9));
printf("%d \n",printf(" %u ", -9));
printf("%d \n", ft_printf(" %u ", -10));
printf("%d \n",printf(" %u ", -10));
printf("%d \n", ft_printf(" %u ", -11));
printf("%d \n",printf(" %u ", -11));
printf("%d \n", ft_printf(" %u ", -14));
printf("%d \n",printf(" %u ", -14));
printf("%d \n", ft_printf(" %u ", -15));
printf("%d \n",printf(" %u ", -15));
printf("%d \n", ft_printf(" %u ", -16));
printf("%d \n",printf(" %u ", -16));
printf("%d \n", ft_printf(" %u ", -99));
printf("%d \n",printf(" %u ", -99));
printf("%d \n", ft_printf(" %u ", -100));
printf("%d \n",printf(" %u ", -100));
printf("%d \n", ft_printf(" %u ", -101));
printf("%d \n",printf(" %u ", -101));
printf("%d \n", ft_printf(" %u ", INT_MIN));
printf(" %u \n", INT_MIN);
printf("%d \n", ft_printf(" %u ", LONG_MAX));
printf(" %u \n", LONG_MAX);
printf("%d \n", ft_printf(" %u ", UINT_MAX));
printf(" %u \n", UINT_MAX);
printf("%d \n", ft_printf(" %u ", ULONG_MAX));
printf(" %u \n", ULONG_MAX);
printf("%d \n", ft_printf(" %u ", 9223372036854775807LL));
printf(" %u \n", 9223372036854775807LL);
printf("%d \n", ft_printf(" %u %u %u %u %u %u %u", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42));
printf("Here is the test the ultimate test \n");
printf("%d \n", ft_printf("%%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %c%%", 'A', "42", 42, 42 ,42 , 42, 42, 'B', "-42", -42, -42 ,-42 ,-42, 42, 'C', "0", 0, 0 ,0 ,0, 42, 0));
printf("%d \n", printf("%%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %c%%", 'A', "42", 42, 42 ,42 , 42, 42, 'B', "-42", -42, -42 ,-42 ,-42, 42, 'C', "0", 0, 0 ,0 ,0, 42, 0));
}
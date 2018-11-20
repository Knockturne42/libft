#include "libft.h"

void	ft_putnbr(int nb)
{
	unsigned int	val;

	if (nb < 0)
	{
		ft_putchar('-');
		val = nb * -1;
	}
	else
	{
		val = nb;
	}
	if (val > 9)
	{
		ft_putnbr(val / 10);
		ft_putchar(val % 10 + '0');
	}
	else
	{
		ft_putchar(val + '0');
	}
}

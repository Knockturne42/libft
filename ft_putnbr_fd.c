#include "libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	unsigned int	val;

	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		val = nb * -1;
	}
	else
	{
		val = nb;
	}
	if (val > 9)
	{
		ft_putnbr_fd(val / 10, fd);
		ft_putchar_fd(val % 10 + '0', fd);
	}
	else
	{
		ft_putchar_fd(val + '0', fd);
	}
}

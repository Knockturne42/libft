#include "libft.h"

int		ft_toupper(int c)
{
	if (ft_isalpha(c))
		if (c > 90)
			return (c - 32);
	return (c);
}

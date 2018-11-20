#include "libft.h"

int		ft_tolower(int c)
{
	if (ft_isalpha(c))
		if (c < 91)
			return (c + 32);
	return (c);
}

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*b;
	size_t	i;

	i = 0;
	if (!(b = (char *)malloc(size)))
		return (NULL);
	while (i < size)
		b[i++] = 0;
	return ((void *)b);
}

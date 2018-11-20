#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*b;

	b = (char *)s;
	while (n--)
		*b++ = (char)c;
	return (s);
}

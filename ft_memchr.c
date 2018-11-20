#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*b;
	unsigned char	f;

	b = (unsigned char *)s;
	f = (unsigned char)c;
	while (n--)
	{
		if (*b == f)
			return ((void *)b);
		b++;
	}
	return (NULL);
}

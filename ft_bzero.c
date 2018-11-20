#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char *b;

	b = (char *)s;
	while (n--)
		*b++ = 0;
}

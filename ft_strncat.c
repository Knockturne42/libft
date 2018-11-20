#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t nb)
{
	char	*dst;

	dst = dest;
	while (*dest)
		dest++;
	while (*src && nb--)
		*dest++ = *src++;
	*dest = '\0';
	return (dst);
}

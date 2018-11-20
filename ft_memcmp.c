#include "libft.h"

int		ft_memcmp(const void *m1, const void *m2, size_t n)
{
	unsigned char	*s1;
	unsigned char	*s2;

	s1 = (unsigned char *)m1;
	s2 = (unsigned char *)m2;
	while (n--)
	{
		if (*s1 != *s2)
			return ((int)(*s1 - *s2));
		s1++;
		s2++;
	}
	return (0);
}

#include "libft.h"

char	*ft_strnstr(const char *h, const char *n, size_t len)
{
	char	*oc;
	char	*t_n;
	size_t	i;
	size_t	t;

	i = 0;
	if (!*n)
		return ((char *)h);
	while (*h && i < len)
	{
		t_n = (char *)n;
		while (*h && *t_n != *h && i++ < len)
			h++;
		oc = (char *)h;
		t = i;
		while (*h && *t_n && *h++ == *t_n && i++ < len)
			t_n++;
		if (*t_n == '\0')
			return (oc);
		if (*h)
			h = (const char *)(oc + 1);
		i = t + 1;
	}
	return (NULL);
}

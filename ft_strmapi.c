#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char	*new;
	size_t	i;

	if (!s || !f)
		return (NULL);
	new = ft_strdup(s);
	i = 0;
	while (new && new[i])
	{
		new[i] = f(i, new[i]);
		i++;
	}
	return (new);
}

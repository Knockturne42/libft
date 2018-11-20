#include "libft.h"

char	*ft_strmap(const char *s, char (*f)(char))
{
	char	*new;
	size_t	i;

	if (!s || !f)
		return (NULL);
	new = ft_strdup(s);
	i = 0;
	while (new && new[i])
	{
		new[i] = f(new[i]);
		i++;
	}
	return (new);
}

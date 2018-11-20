#include "libft.h"

char	*ft_strdup(const char *str)
{
	size_t	len;
	size_t	i;
	char	*n;

	len = ft_strlen(str);
	i = 0;
	if (!(n = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (len--)
		n[i++] = *str++;
	n[i] = '\0';
	return (n);
}

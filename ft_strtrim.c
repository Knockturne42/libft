#include "libft.h"

char	*ft_strtrim(const char *s)
{
	size_t	beg;
	size_t	end;
	size_t	i;

	if (!s)
		return (NULL);
	i = 0;
	while (s[i] && (s[i] == ' ' || s[i] == '\n' || s[i] == '\t'))
		i++;
	beg = i;
	end = i;
	while (s[i])
	{
		if (s[i] != ' ' && s[i] != '\n' && s[i] != '\t')
			end = i;
		i++;
	}
	return (ft_strsub(s, (unsigned int)beg, end - beg + 1));
}

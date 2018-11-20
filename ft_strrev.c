#include "libft.h"

void	ft_strrev(char *str, int idx)
{
	int		size;
	char	tmp;

	size = ft_strlen(str);
	if (idx < size / 2)
	{
		tmp = str[idx];
		str[idx] = str[size - idx - 1];
		str[size - idx - 1] = tmp;
		ft_strrev(str, idx + 1);
	}
}
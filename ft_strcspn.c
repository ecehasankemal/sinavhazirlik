#include <stdlib.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	int	index;
	int	jndex;

	index = 0;
	while (s[index])
	{
		jndex = 0;
		while (reject[jndex])
		{
			if (s[index] == reject[jndex])
				return (index);
			jndex++;
		}
		index++;
	}
	while (s[index] != '\0')
		index++;
	return (index);
}

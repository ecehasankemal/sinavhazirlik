#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}

char	*ft_strdup(char *src)
{
	int		index;
	char	*res;

	index = 0;
	if (!src)
		return (NULL);
	res = (char *)malloc(sizeof(char) * ft_strlen(src));
	while (src[index] != '\0')
	{
		res[index] = src[index];
		index++;
	}
	res[index] = '\0';
	return (res);
}

/*#include <stdio.h>

int	main(void)
{
	char	*str = ft_strdup("hasan kemal");
	printf("%s", str);
	return (0);
}*/

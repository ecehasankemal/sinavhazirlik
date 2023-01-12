#include <unistd.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}

void	epur_str(char *str)
{
	int	count;
	int	len;

	len = ft_strlen(str);
	count = 0;
	while (str[count] == ' ' || str[count] == '\t')
		count++;
	while (str[count])
	{
		if ((str[count] == ' ' || str[count] == '\t')
		&& ((str[count + 1] == ' ') || str[count + 1] == '\t'))
			count++;
		else
		{
			if (count == len - 1 && str[count] == ' ')
				break ;
			write(1, &str[count], 1);
			count++;
		}
	}
}

int	main(int ac, char *av[])
{
	if (ac == 2)
		epur_str(av[1]);
	write(1, "\n", 1);
	return (0);
}

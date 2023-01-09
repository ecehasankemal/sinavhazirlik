#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	yazaq(int count)
{
	if (count > 9)
	{
		yazaq(count / 10);
		yazaq(count % 10);
	}
	else
		ft_putchar(count + '0');
}

void	fizzbuzz(void)
{
	int	count;

	count = 1;
	while (count <= 100)
	{
		if (count % 3 == 0 && count % 5 == 0)
			write(1, "fizzbuzz", 8);
		else if (count % 3 == 0)
			write(1, "fizz", 4);
		else if (count % 5 == 0)
			write(1, "buzz", 4);
		else
			yazaq(count);
		write(1, "\n", 1);
		count++;
	}
}

int	main(void)
{
	fizzbuzz();
	return (0);
}

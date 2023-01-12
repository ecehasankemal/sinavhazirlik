#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}

void	do_op(char *a, char *b, char *c)
{
	int	count1;
	int	count2;
	char	bla;

	count1 = atoi(a);
	count2 = atoi(c);
	if (ft_strlen(b) == 1)
		bla = b[0];
	else
		bla = '\0';

	if (bla == '+')
		printf("%d", count1 + count2);
	else if (bla == '-')
		printf("%d", count1 - count2);
	else if (bla == '*')
		printf("%d", count1 * count2);
	else if (bla == '/')
		printf("%d", count1 / count2);
	else
		printf("0");
}


int	main(int ac, char *av[])
{
	if (ac == 4)
	{
		do_op(av[1], av[2], av[3]);
	}
	printf("\n");
	return (0);
}

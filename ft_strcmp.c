int	ft_strcmp(char *s1, char *s2)
{
	int	count;

	count = 0;
	while (s2[count] != '\0' && s2[count] == s1[count])
		count++;
	return (s1[count] - s2[count]);
}

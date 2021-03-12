
char	*ft_strrepl(char *str, char c1, char c2)
{
	int a;

	a = 0;
	while (str[a] != '\0')
	{
		if (str[a] == c1)
			str[a] = c2;
		a++;
	}
	return (str);
}

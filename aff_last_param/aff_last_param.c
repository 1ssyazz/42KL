
#include <unistd.h>

char	ft_putstr(char *str)
{
	int a;

	a = 0;
	while (str[a] != '\0')
	{
		write(1, &str[a], 1);
		a++;
	}
	return (*str);
}

int		main(int argc, char **argv)
{
	if (argc <= 1)
	{
		write(1, "\n", 1);
	}
	else
	{
		ft_putstr(argv[argc - 1]);
		write(1, "\n", 1);
	}
	return (0);
}

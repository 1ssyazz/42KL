
#include <unistd.h>

int		main(int argc, char *argv[])
{
	char		str;
	int			i;

	i = 0;
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	while (argv[1][i])
	{
		if (97 <= argv[1][i] && 122 >= argv[1][i])
		{
			str = 97 + (122 - argv[1][i]);
			write(1, &str, 1);
		}
		else if (65 <= argv[1][i] && 90 >= argv[1][i])
		{
			str = 65 + (90 - argv[1][i]);
			write(1, &str, 1);
		}
		i++;
	}
	write(1, "\n", 1);
	return (0);
}

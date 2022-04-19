#include "minitalk.h"

int	ft_atoi(const char *str)
{
	long long	s;
	int			d;

	s = 0;
	d = 1;
	while ((*str < 14 && *str > 8) || *str == 32)
		str++;
	if (*str == '-')
	{
		d *= -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		s = (s * 10) + (*str - 48);
		str++;
		if (s > 2147483647 && d == 1)
			return (-1);
		else if (s > 2147483648 && d == -1)
			return (0);
	}
	return ((int)(s * d));
}

void getbit(int pid, const char *str)
{
	int i;
	char c;

	while (*str)
	{
		i = 8;
		c = *str++;
		while (i--)
		{
			if (c >> i & 1)
				kill(pid, SIGUSR1);
			else
				kill(pid, SIGUSR2);
			sleep(1);
		}
	}
}

int main(int argc, char **argv)
{
	int pid;
	char *str;

	if (argc > 2)
	{
		pid = ft_atoi(argv[1]);
		getbit(pid, argv[2]);
	}
}

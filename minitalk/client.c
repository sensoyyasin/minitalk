/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysensoy <ysensoy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 12:11:14 by ysensoy           #+#    #+#             */
/*   Updated: 2022/04/23 13:47:46 by ysensoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	getbit(int pid, char *str)
{
	int		i;
	char	c;

	while (*str)
	{
		i = 7;
		c = *str++;
		while (i >= 0)
		{
			if (c >> i & 1)
				kill(pid, 30);
			else
				kill(pid, 31);
			usleep(100);
			i--;
		}
	}
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		getbit(ft_atoi(argv[1]), argv[2]);
	return (0);
}

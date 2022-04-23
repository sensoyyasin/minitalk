/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysensoy <ysensoy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 14:43:10 by ysensoy           #+#    #+#             */
/*   Updated: 2022/04/22 15:19:59 by ysensoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk_bonus.h"

void	getbit(int pid, unsigned char *str)
{
	int				i;
	unsigned char	c;

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

int	main(int argc, char **argv)
{
	if (argc > 2)
		getbit(ft_atoi(argv[1]), (unsigned char *)argv[2]);
	return (0);
}

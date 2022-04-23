/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysensoy <ysensoy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 14:45:12 by ysensoy           #+#    #+#             */
/*   Updated: 2022/04/22 15:19:05 by ysensoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk_bonus.h"

void	sig_usr(int sig)
{
	static unsigned char	str;
	static int				i;

	if (sig == SIGUSR1)
		str = str | 1;
	i++;
	if (i == 8)
	{
		write(1, &str, 1);
		i = 0;
		str = 0;
	}
	else
		str = str << 1;
}

int	main(void)
{
	char	*str;

	str = ft_itoa(getpid());
	write(1, str, len(getpid()));
	free(str);
	write(1, "\n", 1);
	while (1)
	{
		signal(SIGUSR1, sig_usr);
		signal(SIGUSR2, sig_usr);
		usleep(100);
	}
	return (0);
}

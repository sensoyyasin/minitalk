/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk_bonus.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysensoy <ysensoy@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 15:47:46 by ysensoy           #+#    #+#             */
/*   Updated: 2022/04/20 15:47:47 by ysensoy          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_BONUS_H
# define MINITALK_BONUS_H

# include <signal.h>
# include <unistd.h>
# include <stdlib.h>

char	*ft_itoa(int a);
int		ft_atoi(const char *str);
int		len(int a);
void	getbit(int pid, unsigned char *str);
void	sig_usr(int sig);

#endif

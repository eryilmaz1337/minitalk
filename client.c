/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryilmaz <eryilmaz@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 15:25:16 by eryilmaz          #+#    #+#             */
/*   Updated: 2022/04/23 14:25:33 by eryilmaz         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"
#include <signal.h>

void	gonder(int pid, char	*data)
{
	int	i;

	while (*data)
	{
		i = 7;
		while (i >= 0)
		{
			if (*data >> i & 1)
				kill (pid, SIGUSR1);
			else
				kill (pid, SIGUSR2);
			usleep(100);
			i--;
		}
		data++;
	}
}

void	geribildirim(int sig, siginfo_t	*bilgi, void	*undelete)
{
	ft_putstr_fd ("Sinyal Başarılı Bir Şekilde Gönderildi\n", 1);
}

int	main(int index, char	**data)
{
	struct sigaction	act;

	act.sa_flags = SA_SIGINFO;
	act.sa_sigaction = geribildirim;
	sigaction(SIGUSR2, &act, NULL);
	if (index == 3)
		gonder(ft_atoi(data[1]), data[2]);
}

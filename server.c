/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryilmaz <eryilmaz@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 15:26:29 by eryilmaz          #+#    #+#             */
/*   Updated: 2022/04/23 14:29:21 by eryilmaz         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"
#include <signal.h>

void	yazdirma(int sig, siginfo_t	*bilgi, void	*undelete)
{
	static unsigned char	yazilacakkarakter;
	static int				i;

	if (sig == SIGUSR1)
		yazilacakkarakter = yazilacakkarakter | 1;
	i++;
	if (i == 8)
	{
		ft_putchar_fd(yazilacakkarakter, 1);
		yazilacakkarakter = 0;
		i = 0;
		kill(bilgi->si_pid, SIGUSR2);
	}
	yazilacakkarakter = yazilacakkarakter << 1;
}

int	main(void)
{
	struct sigaction	act;

	act.sa_flags = SA_SIGINFO;
	act.sa_sigaction = yazdirma;
	ft_putstr_fd("Uyguld(), 1);ama PID: ", 1);
	ft_putnbr_fd(getpi(), 1);
	ft_putstr_fd("\n", 1);
	sigaction(SIGUSR1, &act, NULL);
	sigaction(SIGUSR2, &act, NULL);
	while (1)
		pause();
}

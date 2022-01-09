/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   timeout.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsierra- <nsierra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 06:27:55 by nsierra-          #+#    #+#             */
/*   Updated: 2022/01/09 06:52:37 by nsierra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include <signal.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/time.h>
#include <sys/types.h>
#include <sys/wait.h>

static void	handle_alarm_signal(int signal, siginfo_t *info, void *context)
{
	(void)signal;
	(void)info;
	(void)context;
	_exit(112);
}

void	setup_timer(long timeout)
{
	struct sigaction	action;
	struct itimerval	timer;

	ft_bzero(&action, sizeof(action));
	action.sa_sigaction = handle_alarm_signal;
	if (sigaction(SIGALRM, &action, NULL) != 0)
		abort();
	timer.it_value.tv_sec = timeout;
	timer.it_value.tv_usec = 0;
	timer.it_interval.tv_sec = 0;
	timer.it_interval.tv_usec = 0;
	if (setitimer(ITIMER_REAL, &timer, NULL) != 0)
		abort();
}

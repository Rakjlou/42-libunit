/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run_tests.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsierra- <nsierra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 06:51:36 by nsierra-          #+#    #+#             */
/*   Updated: 2022/01/09 05:54:37 by nsierra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>
#include <sys/types.h>
#include <sys/wait.h>

static void	destroy_test(void *content)
{
	t_test	*test;

	test = (t_test *)content;
	free(test->name);
	free(test);
}

static void	test_summary(t_test *test, char *section_name)
{
	ft_putstr(section_name);
	ft_putstr(":");
	ft_putstr(test->name);
	ft_putstr(":[");
	if (test->status == SUCCESS)
		ft_putstr("\033[0;32mOK\033[0m");
	else if (test->status == SEGV)
		ft_putstr("\033[0;31mSIGSEGV\033[0m");
	else if (test->status == BUS)
		ft_putstr("\033[0;31mSIGBUS\033[0m");
	else
		ft_putstr("\033[0;31mKO\033[0m");
	ft_putstr("]\n");
}

static void	wait_test_status(t_test *test)
{
	int	status;

	wait(&status);
	if (WIFEXITED(status) && WEXITSTATUS(status) == 0)
		test->status = SUCCESS;
	else if (WIFEXITED(status) && WEXITSTATUS(status) == -1)
		test->status = ERROR;
	else if (WIFSIGNALED(status) && WTERMSIG(status) == SIGSEGV)
		test->status = SEGV;
	else if (WIFSIGNALED(status) && WTERMSIG(status) == SIGBUS)
		test->status = BUS;
}

static void	execute_test(t_suite *suite, t_test *test)
{
	pid_t	cpid;
	int		(*callback)(void);

	start_stdout_capture(suite);
	cpid = fork();
	if (cpid == -1)
		test->status = INTERNAL_ERROR;
	else if (cpid == 0)
	{
		callback = test->callback;
		ft_lstclear(&suite->tests, destroy_test);
		exit(callback());
	}
	else
	{
		wait_test_status(test);
		end_stdout_capture(suite);
	}
}

void	run_tests(t_suite *suite, char *section_name)
{
	t_list	*cursor;
	t_test	*test;

	get_stdout_fd(suite);
	cursor = suite->tests;
	while (cursor)
	{
		test = (t_test *)cursor->content;
		execute_test(suite, test);
		test_summary(test, section_name);
		++suite->total;
		if (test->status == SUCCESS)
			++suite->success;
		cursor = cursor->next;
	}
	ft_lstclear(&suite->tests, destroy_test);
}

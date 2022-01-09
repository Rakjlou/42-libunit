/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stdout_capture.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsierra- <nsierra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 05:33:32 by nsierra-          #+#    #+#             */
/*   Updated: 2022/01/09 05:53:27 by nsierra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include <unistd.h>
#include <stdio.h>

int	start_stdout_capture(t_suite *suite)
{
	suite->stdout = -1;
	if (pipe(suite->capture_pipe) == -1)
		return (0);
	suite->stdout = dup(STDOUT_FILENO);
	dup2(suite->capture_pipe[1], STDOUT_FILENO);
	return (1);
}

void	end_stdout_capture(t_suite *suite)
{
	close(suite->capture_pipe[0]);
	close(suite->capture_pipe[1]);
	dup2(suite->stdout, STDOUT_FILENO);
	close(suite->stdout);
	suite->stdout = -1;
}

int	get_stdout_fd(t_suite *s)
{
	static t_suite	*suite = NULL;

	if (s != NULL)
		suite = s;
	else if (suite == NULL)
		return (-1);
	return (suite->capture_pipe[0]);
}

char	*get_stdout_line(void)
{
	int	fd;

	fd = get_stdout_fd(NULL);
	if (fd <= 0)
	{
		fprintf(stderr, "LJDJHD\n");
		return (NULL);
	}
	return (get_next_line(fd));
}

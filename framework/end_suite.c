/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   end_suite.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsierra- <nsierra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 00:52:08 by nsierra-          #+#    #+#             */
/*   Updated: 2022/01/09 01:01:46 by nsierra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include <unistd.h>

static void	print_summary(t_suite *suite)
{
	ft_putnbr(suite->success);
	write(STDOUT_FILENO, "/", 1);
	ft_putnbr(suite->total);
	write(STDOUT_FILENO, " tests succeeded\n", 17);
}

int	end_suite(t_suite *suite)
{
	print_summary(suite);
	if (suite->total == suite->success)
		return (0);
	return (-1);
}

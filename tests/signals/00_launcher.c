/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsierra- <nsierra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 00:00:20 by nsierra-          #+#    #+#             */
/*   Updated: 2022/01/09 07:08:58 by nsierra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"
#include "libunit.h"

void	signals_launcher(t_suite *suite)
{
	test_add(suite, "abort", abort_test);
	test_add(suite, "fpe", fpe_test);
	test_add(suite, "pipe", pipe_test);
	test_add(suite, "ill", ill_test);
	run_tests(suite, "signal");
}

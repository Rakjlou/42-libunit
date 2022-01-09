/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsierra- <nsierra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 00:00:20 by nsierra-          #+#    #+#             */
/*   Updated: 2022/01/09 00:39:59 by nsierra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"
#include "libunit.h"

void	sigbus_launcher(t_suite *suite)
{
	test_add(suite, "test", sigbus_test);
	run_tests(suite, "sigbus");
}

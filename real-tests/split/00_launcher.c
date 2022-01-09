/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsierra- <nsierra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 00:00:20 by nsierra-          #+#    #+#             */
/*   Updated: 2022/01/09 02:53:57 by nsierra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "tests.h"
#include "libunit.h"

void	free_split(char **split)
{
	int	i;

	i = 0;
	while (split[i] != NULL)
	{
		free(split[i]);
		++i;
	}
}

void	launcher_split(t_suite *suite)
{
	test_add(suite, "simple", test_simple);
	test_add(suite, "no_split", test_no_split);
	test_add(suite, "split_on_zero", test_split_on_zero);
	test_add(suite, "only_splittable_chars", test_only_splittable_chars);
	test_add(suite, "empty_string", test_empty_string);
	test_add(suite, "split_char_end", test_split_char_end);
	test_add(suite, "split_char_start", test_split_char_start);
	test_add(suite, "split_char_start_end", test_split_char_start_end);
	test_add(suite, "complex", test_complex);
	run_tests(suite, "split");
}

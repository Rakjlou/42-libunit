/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsierra- <nsierra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 00:00:20 by nsierra-          #+#    #+#             */
/*   Updated: 2022/01/09 02:20:57 by nsierra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"
#include "libunit.h"

void	launcher_atoi(t_suite *suite)
{
	test_add(suite, "positive_number", test_positive_number);
	test_add(suite, "negative_number", test_negative_number);
	test_add(suite, "zero", test_zero);
	test_add(suite, "min", test_min);
	test_add(suite, "max", test_max);
	test_add(suite, "plus_sign", test_plus_sign);
	test_add(suite, "multiple_plus_signs", test_multiple_plus_signs);
	test_add(suite, "multiple_minus_signs", test_multiple_minus_signs);
	test_add(suite, "multiple_signs", test_multiple_signs);
	test_add(suite, "minus_only", test_minus_only);
	test_add(suite, "plus_only", test_plus_only);
	test_add(suite, "invalid_at_start", test_invalid_at_start);
	test_add(suite, "invalid_in_number", test_invalid_in_number);
	test_add(suite, "empty", test_empty);
	run_tests(suite, "atoi");
}

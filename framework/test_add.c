/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_add.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsierra- <nsierra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 06:31:55 by nsierra-          #+#    #+#             */
/*   Updated: 2022/01/08 07:18:59 by nsierra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include <stdlib.h>

static t_test	*test_new(char *name, int (*callback)(void))
{
	t_test	*test;

	test = malloc(sizeof(t_test));
	if (test == NULL)
		return (NULL);
	test->name = ft_strdup(name);
	test->callback = callback;
	test->status = UNKNOWN;
	return (test);
}

void	test_add(t_suite *suite, char *name, int (*callback)(void))
{
	t_test	*test;

	test = test_new(name, callback);
	if (test == NULL)
		return ;
	ft_lstadd_back(&suite->tests, test);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_test.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsierra- <nsierra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 00:00:20 by nsierra-          #+#    #+#             */
/*   Updated: 2022/01/09 06:10:12 by nsierra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libunit.h"

int	stdout_test(void)
{
	int		result;
	char	*ref;
	char	*line;

	result = 0;
	ref = "This is a test\n";
	ft_putstr(ref);
	line = get_stdout_line();
	if (strcmp(line, ref) != 0)
		result = -1;
	free(line);
	return (result);
}

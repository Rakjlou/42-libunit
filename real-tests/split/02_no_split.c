/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_no_split.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsierra- <nsierra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 02:51:16 by nsierra-          #+#    #+#             */
/*   Updated: 2022/01/09 03:19:32 by nsierra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "tests.h"
#include <string.h>

int	test_no_split(void)
{
	int		result;
	char	*ref;
	char	**split;

	result = 0;
	ref = "Hello, World!";
	split = ft_split(ref, 'X');
	if (!(split[0] != NULL && strcmp(split[0], ref) == 0))
		result = -1;
	else if (split[1] != NULL)
		result = -1;
	free_split(split);
	return (result);
}

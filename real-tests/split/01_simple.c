/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_simple.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsierra- <nsierra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 02:51:16 by nsierra-          #+#    #+#             */
/*   Updated: 2022/01/09 03:19:28 by nsierra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdlib.h>

static void	free_split(char **split)
{
	int	i;

	i = 0;
	while (split[i] != NULL)
	{
		free(split[i]);
		++i;
	}
}

int	test_simple(void)
{
	int		result;
	char	**split;

	result = 0;
	split = ft_split("Hello, World!", ' ');
	if (!(split[0] != NULL && strcmp(split[0], "Hello,") == 0))
		result = -1;
	else if (!(split[1] != NULL && strcmp(split[1], "World!") == 0))
		result = -1;
	else if (split[2] != NULL)
		result = -1;
	free_split(split);
	return (result);
}

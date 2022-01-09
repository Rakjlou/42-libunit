/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   07_split_char_start.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsierra- <nsierra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 02:51:16 by nsierra-          #+#    #+#             */
/*   Updated: 2022/01/09 03:19:44 by nsierra-         ###   ########.fr       */
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

int	test_split_char_start(void)
{
	int		result;
	char	**split;

	result = 0;
	split = ft_split(" libunit", ' ');
	if (!(split[0] != NULL && strcmp(split[0], "libunit") == 0))
		result = -1;
	else if (split[1] != NULL)
		result = -1;
	free_split(split);
	return (result);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_only_splittable_chars.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsierra- <nsierra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 02:51:16 by nsierra-          #+#    #+#             */
/*   Updated: 2022/01/09 03:19:38 by nsierra-         ###   ########.fr       */
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

int	test_only_splittable_chars(void)
{
	int		result;
	char	**split;

	result = 0;
	split = ft_split("          ", ' ');
	if (split[0] != NULL)
		result = -1;
	free_split(split);
	return (result);
}

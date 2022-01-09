/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   06_split_char_end.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsierra- <nsierra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 02:51:16 by nsierra-          #+#    #+#             */
/*   Updated: 2022/01/09 03:19:42 by nsierra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "tests.h"
#include <string.h>

int	test_split_char_end(void)
{
	int		result;
	char	**split;

	result = 0;
	split = ft_split("libunit ", ' ');
	if (!(split[0] != NULL && strcmp(split[0], "libunit") == 0))
		result = -1;
	else if (split[1] != NULL)
		result = -1;
	free_split(split);
	return (result);
}

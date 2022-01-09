/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   09_complex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsierra- <nsierra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 02:51:16 by nsierra-          #+#    #+#             */
/*   Updated: 2022/01/09 03:22:49 by nsierra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "tests.h"
#include <string.h>

int	test_complex(void)
{
	int		result;
	char	**split;

	result = 0;
	split = ft_split("   such a  complex    string to  split    ", ' ');
	if (!(split[0] != NULL && strcmp(split[0], "such") == 0))
		result = -1;
	else if (!(split[1] != NULL && strcmp(split[1], "a") == 0))
		result = -1;
	else if (!(split[2] != NULL && strcmp(split[2], "complex") == 0))
		result = -1;
	else if (!(split[3] != NULL && strcmp(split[3], "string") == 0))
		result = -1;
	else if (!(split[4] != NULL && strcmp(split[4], "to") == 0))
		result = -1;
	else if (!(split[5] != NULL && strcmp(split[5], "split") == 0))
		result = -1;
	else if (split[6] != NULL)
		result = -1;
	free_split(split);
	return (result);
}

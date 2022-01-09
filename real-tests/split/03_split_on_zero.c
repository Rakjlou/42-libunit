/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_split_on_zero.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsierra- <nsierra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 02:51:16 by nsierra-          #+#    #+#             */
/*   Updated: 2022/01/09 03:19:34 by nsierra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "tests.h"
#include <string.h>

int	test_split_on_zero(void)
{
	int		result;
	char	*ref;
	char	**split;

	result = 0;
	ref = "Hello, World!";
	split = ft_split(ref, 0);
	if (!(split[0] != NULL && strcmp(split[0], ref) == 0))
		result = -1;
	else if (split[1] != NULL)
		result = -1;
	free_split(split);
	return (result);
}

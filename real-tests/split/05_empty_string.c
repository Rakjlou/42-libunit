/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_empty_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsierra- <nsierra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 02:51:16 by nsierra-          #+#    #+#             */
/*   Updated: 2022/01/09 03:19:40 by nsierra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "tests.h"
#include <string.h>

int	test_empty_string(void)
{
	int		result;
	char	**split;

	result = 0;
	split = ft_split("", ' ');
	if (split[0] != NULL)
		result = -1;
	free_split(split);
	return (result);
}

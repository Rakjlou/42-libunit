/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   12_invalid_at_start.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsierra- <nsierra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 02:02:35 by nsierra-          #+#    #+#             */
/*   Updated: 2022/01/09 02:17:28 by nsierra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	test_invalid_at_start(void)
{
	char	*test;

	test = "x";
	if (ft_atoi(test) == atoi(test))
		return (0);
	return (-1);
}

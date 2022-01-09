/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_positive_number.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsierra- <nsierra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 02:02:35 by nsierra-          #+#    #+#             */
/*   Updated: 2022/01/09 02:08:55 by nsierra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	test_positive_number(void)
{
	char	*test;

	test = "42";
	if (ft_atoi(test) == atoi(test))
		return (0);
	return (-1);
}

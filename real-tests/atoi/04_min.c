/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_min.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsierra- <nsierra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 02:02:35 by nsierra-          #+#    #+#             */
/*   Updated: 2022/01/09 02:14:42 by nsierra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	test_min(void)
{
	char	*test;

	test = "2147483647";
	if (ft_atoi(test) == atoi(test))
		return (0);
	return (-1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   06_plus_sign.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsierra- <nsierra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 02:02:35 by nsierra-          #+#    #+#             */
/*   Updated: 2022/01/09 02:15:24 by nsierra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	test_plus_sign(void)
{
	char	*test;

	test = "+42";
	if (ft_atoi(test) == atoi(test))
		return (0);
	return (-1);
}

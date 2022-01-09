/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   11_plus_only.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsierra- <nsierra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 02:02:35 by nsierra-          #+#    #+#             */
/*   Updated: 2022/01/09 02:17:13 by nsierra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	test_plus_only(void)
{
	char	*test;

	test = "+";
	if (ft_atoi(test) == atoi(test))
		return (0);
	return (-1);
}

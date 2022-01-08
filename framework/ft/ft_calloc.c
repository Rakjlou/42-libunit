/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsierra- <nsierra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 12:43:15 by nsierra-          #+#    #+#             */
/*   Updated: 2022/01/08 05:12:52 by nsierra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	size_t	total_size;
	void	*res;

	total_size = count * size;
	res = malloc(total_size);
	if (res == NULL)
		return (NULL);
	ft_bzero(res, total_size);
	return (res);
}

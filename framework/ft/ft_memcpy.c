/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsierra- <nsierra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 07:14:06 by nsierra-          #+#    #+#             */
/*   Updated: 2022/01/08 07:14:18 by nsierra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*cdest;
	const char	*csrc;

	if ((dest == NULL && src == NULL) || n == 0)
		return (dest);
	cdest = (char *)dest;
	csrc = (const char *)src;
	while (n-- > 0)
		*cdest++ = *csrc++;
	return (dest);
}

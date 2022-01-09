/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsierra- <nsierra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 03:44:07 by nsierra-          #+#    #+#             */
/*   Updated: 2022/01/09 03:45:34 by nsierra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include <unistd.h>

void	ft_putstr(const char *str)
{
	size_t	len;

	len = ft_strlen(str);
	write(STDOUT_FILENO, str, len);
}

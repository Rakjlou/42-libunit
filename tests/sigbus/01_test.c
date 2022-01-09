/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_test.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsierra- <nsierra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 00:00:20 by nsierra-          #+#    #+#             */
/*   Updated: 2022/01/09 01:04:01 by nsierra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <sys/mman.h>
#include <stdio.h>

int	sigbus_test(void)
{
	FILE	*f;
	int		*m;

	f = tmpfile();
	m = mmap(0, 4, PROT_WRITE, MAP_PRIVATE, fileno(f), 0);
	*m = 0;
	if (*m == 0)
		return (0);
	return (-1);
}
